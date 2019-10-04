#include<iostream>
#include<cstdlib>
#include<graphics.h>
#include<cmath>
using namespace std;

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
int main()
{
int X0,Y0,X1,Y1;
cout<<"Enter the four coordinates: "<<endl;
cin>>X0>>Y0>>X1>>Y1;
int gd = DETECT, gm;
initgraph(&gd,&gm, NULL);
DDA(X0,Y0,X1,Y1);
delay(50000);
closegraph();
return 0;
}
