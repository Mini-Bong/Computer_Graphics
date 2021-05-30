#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	int x1=200,y1=300,x2=400, y2=500,x,y,slop;
	int m;
	initgraph(&gd,&gm,NULL);
	//printf("Enter the starting and ending point of the line: ");
	//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	m=2*(y2-y1);
	slop=m-(x2-x1);
	x=x1;
	y=y1;
	for(x=x1; x<=x2; x++)
	{
		putpixel(x,y,RED);
		slop+=m;
		if(slop>=0)
		{
			y++;
			slop-=2*(x2-x1);
		}
		delay(75);
	}
	getch();
	closegraph();
	return 0;
	
}
