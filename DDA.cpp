#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	int x1=100,x2=200,y1=100,y2=200,dx,dy,steps,i;
	float xinc,yinc,x,y;
	initgraph(&gd,&gm,NULL);
	dx=x2-x1;
	dy=y2-y1;
	steps = abs(dx)>abs(dy)?abs(dx):abs(dy);
	xinc = dx/(float)steps;
	yinc = dy/(float)steps;
	x=x1;
	y=y1;
	for(i=0; i<=steps; i++)
	{
		putpixel(x,y,RED);
		x+=xinc;
		y+=yinc;
		delay(75);
	}
	getch();
	closegraph();
	return 0;
}
