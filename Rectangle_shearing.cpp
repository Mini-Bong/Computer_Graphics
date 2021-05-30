#include<graphics.h>
#include<iostream>
#include<conio.h>
int main()
{
	int gd=DETECT, gm;
	int choice;
	float factor;
	int x1=200, y1=100,x2=400,y2=100,x3=400,y3=250,x4=200,y4=250;
	int a,b,c,d;
	initgraph(&gd,&gm,NULL);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x1,y1,x4,y4);
	printf("Enter your choice:\n");
	printf("1.Shearing X direction\n2.Shearing Y direction\n3.Shearing both direction\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the shearing factor: ");
			scanf("%f",&factor);
			setcolor(RED);
			x1+=y1*factor;
			x2+=y2*factor;
			x3+=y3*factor;
			x4+=y4*factor;
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x4,y4);
			line(x1,y1,x4,y4);
			break;
		case 2:
			printf("Enter the shearing factro: ");	
			scanf("%f",&factor);
			setcolor(RED);
			y1+=x1*factor;
			y2+=x2*factor;
			y3+=x3*factor;
			y4+=x4*factor;
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x4,y4);
			line(x1,y1,x4,y4);
			break;
		case 3:
			printf("Enter the shearing factro: ");	
			scanf("%f",&factor);
			setcolor(RED);
			a=x1;
			b=x2;
			c=x3;
			d=x4;
			x1+=y1*factor;
			x2+=y2*factor;
			x3+=y3*factor;
			x4+=y4*factor;
			y1+=a*factor;
			y2+=b*factor;
			y3+=c*factor;
			y4+=d*factor;
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x4,y4);
			line(x1,y1,x4,y4);
			break;
			
	}
	getch();
}
