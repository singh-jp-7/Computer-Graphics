#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,NULL);
    outtextxy(100,150,"We Are   indians");
    delay(5000);
    closegraph();
    return 0;

}
