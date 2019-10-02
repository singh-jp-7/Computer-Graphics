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
    delay(5000);
    closegraph();
    return 0;

}
