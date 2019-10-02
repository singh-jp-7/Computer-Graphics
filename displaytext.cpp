#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,NULL);
    outtextxy(200,200,"We Are Venom");
    delay(5000);
    closegraph();
    return 0;

}
