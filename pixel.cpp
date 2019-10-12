#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,NULL);
    putpixel(100,200,120);
    delay(5000);
    closegraph();
    return 0;
    
}
