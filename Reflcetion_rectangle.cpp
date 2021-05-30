#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{
	int gd=DETECT, gm;
	int choice;
	int x1=600, y1=150,x2=800,y2=300;
	initgraph(&gd,&gm,NULL);
	rectangle(x1,y1,x2,y2);
	line(500,0,500,800);
	line(0,400,1200,400);
	printf("Enter you choice:\n");
	printf("1.Reflect along x axis\n2.Reflect along y axis\n3.Reflcet along origin\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			rectangle(x1,y2+200,x2,y2+350);
			break;
		case 2:
			rectangle(x1-200,y1,x1-400,y2);
			break;
		case 3:
			rectangle(x1-200,y2+200,x1-400,y2+350);
			break;
		default:
			printf("Not valid choice");
			break;
	}
	getch();	
}
