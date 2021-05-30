#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	int x1=200,y1=200,x2=400,y2=200;
	int angle;
	float c,s,x,y;
	initgraph(&gd,&gm,NULL);
	printf("enter the rotation angle: ");
	scanf("%d",&angle);
	line(x1,y1,x2,y2);
	c=cos(angle*0.01746);
	s=sin(angle*0.01746);
	x=200+(x2-x1)*c+(y2-y1)*s;
	y=200-(x2-x1)*s+(y2-y1)*c;
	setcolor(RED);
	line(x1,y1,x,y);
	getch();
	closegraph();
	return 0;
}
