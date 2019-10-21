#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm , i=0;
    initgraph(&gd,&gm,NULL);
    for(int i=0;i<=30;i=i+5)
    {
    putpixel(100,100+(i*3),500+(i*5));
    }
    
    delay(5000);
    closegraph();
    return 0;
    
}
