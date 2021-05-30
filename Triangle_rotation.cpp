#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	int x1=200,y1=200,x2=400,y2=200,x3=400,y3=100;
	int angle;
	float c,s,a,b,p,q;
	initgraph(&gd,&gm,NULL);
	printf("enter the rotation angle: ");
	scanf("%d",&angle);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);
	c=cos(angle*0.01746);
	s=sin(angle*0.01746);
	a=x1+(x2-x1)*c-(y2-y1)*s;
	b=y1+(x2-x1)*s+(y2-y1)*c;
	p=x1+(x3-x1)*c-(y3-y1)*s;
	q=y1+(x3-x1)*s+(y3-y1)*c;
	setcolor(RED);
	line(x1,y1,a,b);
	line(x1,y1,p,q);
	line(a,b,p,q);
	getch();
	return 0;
}
