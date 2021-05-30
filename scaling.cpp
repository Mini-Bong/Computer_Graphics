#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
#include<math.h>
int main()
{
	int gd=DETECT, gm;
	int x1=200,y1=200,x2=400,y2=350;
	float factor;
	initgraph(&gd,&gm,NULL);
	rectangle(x1,y1,x2,y2);
	printf("Enter scaling factor: ");
	scanf("%f",&factor);
	setcolor(RED);
	rectangle(x1*factor,y1*factor, x2*factor,y2*factor);
	getch();
}
