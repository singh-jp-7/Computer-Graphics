#include <graphics.h>
#include<iostream.h>
void main() 
{
	
	int gdriver=DETECT,gmode;

	
	initgraph(&gdriver,&gmode,NULL);

	int x = 75, y = 75, f = 0;

	
	for (f = 0; f <= 5; f++)
	{
		setlinestyle(f, 0, 1);//Sets the text style
		outtextxy(x, y, "Long way Down....");//Loop to print the text in different fonts.
		y = y + 20;
	}

	delay(10000);
  getch();
	closegraph();
  
  }
  

