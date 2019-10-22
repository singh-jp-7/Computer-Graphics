#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;


int translation(int x0, int y0, int x1, int y1)
{   
    
    int tx,ty;
    cout<<"Enter the translational values :"<<endl;
    cin>>tx>>ty;
    int gd=DETECT,gm;
    initgraph(&gd, &gm, NULL);
    rectangle(x0,y0,x1,y1);
    rectangle(x0+tx , y0+ty, x1+tx, y1+ty);
    delay(40000);
    closegraph();

}

int scaling(int x0,int y0, int x1, int y1, float sx, float sy)
{   
    cout<<"Enter the scaling co ordinates :"<<endl;
    cin>>sx>>sy;
    int gd=DETECT,gm;
    initgraph(&gd, &gm, NULL);
    rectangle(x0,y0,x1,y1);
    rectangle(x0*sx , y0*sy, x1*sx, y1*sy);
    delay(40000);
    closegraph();
}

int rotation(float X0,float Y0, float X1, float Y1,double ang)
{
   cout<<"Enter the angle for rotation : "<<endl;
   cin>>ang;
   float x10,x11,y10,y11;
   double angle = (ang*3.14)/180;
   int gd=DETECT,gm;
   initgraph(&gd, &gm, NULL);
   int  cx = getmaxx()/2;
   int cy = getmaxy()/2;

   x10 = X0*cos(angle) - Y0*sin(angle); 
   y10 = X1*sin(angle) + Y0*cos(angle);
   x11 = X1*cos(angle) - Y1*sin(angle);
   y11 = X1*sin(angle) + Y1*cos(angle);

   rectangle(cx + X0,cy + Y0,cx + X1,cy + Y1);
   rectangle(cx + x10,cy + y10,cx + x11,cy + y11);
   delay(40000);
   closegraph();

    
}

void selection(int X0, int Y0, int X1, int Y1,float angle){
    int choice;
    cout<<"Enter your choice :"<<endl<<"1 for translation"<<endl<<"2 for scaling"<<endl<<"3 for rotation "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1 : translation(X0,Y0,X1,Y1);
                break;
        case 2 : scaling(X0,Y0,X1,Y1,4,4);
                break;
        case 3 : rotation(X0,Y0,X1,Y1,angle);
                break;
        default :cout<<"[-]Please enter one of the above values !!!!"<<endl;
                break;
    }

    

}

int main()
{   
    int X0,Y0,X1,Y1,tx,ty;
    float angle;
    cout<<"Enter the co- ordinates for the rectangle : "<<endl;
    cin>>X0>>Y0>>X1>>Y1;
    selection(X0, Y0, X1, Y1,angle);
    delay(50000);
    return 0;

}
