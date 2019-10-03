#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,NULL);
    putpixel(100,100,100);
    outtextxy(200,200,"We Are Venom");
    line(300,300,600,600);
    circle(400,400,6);
    rectangle(300,300,400,400);
    arc(100, 100, 0, 135, 50);
    ellipse(100, 100, 0, 360, 50, 25);
    delay(5000);
    closegraph();
    return 0;

}
