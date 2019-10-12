#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
int x0,y0,x1,y1;
//Input the co ordinates from the user.
cout<<"Enter the four coordinates: "<<endl;
cin>>X0>>Y0>>X1>>Y1;
int gd = DETECT, gm,i;
initgraph(&gd,&gm, NULL);
float dx,dy,x,y,step;
	dx=(float)x1-x0;
	dy=(float)y1-y0;
	if(dx>dy))
	{
		step=dx;
	}
	else
	{
		step=dy;
	}
	dx=dx/step;
	dy=dy/step;
	x=x0;
	y=y0;
	i=1;
	while(i<=step)
	{
		putpixel(x,y,120);
		x+=dx;
		y+=dy;
		i++;
	}
delay(50000);
closegraph();
return 0;
}

