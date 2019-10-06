#include<iostream>
#include<cstdlib>
#include<graphics.h>
#include<cmath>
using namespace std;

//This function uses the DDA Algorithm to draw a line
void DDA(int X0,int Y0, int X1, int Y1)
{
        int dx = X1-X0; 
        int dy = Y1-Y0; 
        int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
        float Xinc = dx / (float) steps; 
        float Yinc = dy / (float) steps; 
        float X = X0; 
        float Y = Y0; 
        for (int i = 0; i <= steps; i++) 
        { 
                putpixel (X,Y,100);  
                X += Xinc; 
                Y += Yinc;           
                delay(5);
                //system("clear");
}
}

//This function uses the Bresenham's algorithm to draw a line..
void bresenham(int X0, int Y0, int X1, int Y1)
{
    int dx, dy, p, x, y;
 
        dx=X1-X0;
        dy=Y1-Y0;
 
        x=X0;
        y=Y0;
 
        p=2*dy-dx;
 
        while(x<X1)
        {
                if(p>=0)
                {
                        putpixel(x,y,100);
                        y=y+1;
                        p=p+2*dy-2*dx;
                }
                else
                {
                        putpixel(x,y,100);
                        p=p+2*dy;
                }
                x=x+1;
        }
}

 
int main()
{
int X0,Y0,X1,Y1;
//Take input from the user i.e co-ordinates for the line
cout<<"Enter the four coordinates: "<<endl;
cin>>X0>>Y0>>X1>>Y1;
int gd = DETECT, gm;
initgraph(&gd,&gm, NULL);
DDA(X0,Y0,X1,Y1);
bresenham(X0,Y0,X1,Y1);
delay(50000);
closegraph();
return 0;
}

