#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int gd=DETECT,gm;
	int i,r=200,x=0,y,X_center=200,Y_center=200;
	float d;
	initgraph(&gd,&gm,NULL);
	printf("Enter Center of circle\n");
	d=1.25-r;
	y=r;
	do
	{
		if(d<0.0)
		{
		
			x++;
			
			d=d+2*x+1;
		}
		else
		{
			x++;
			y--;
			d=d+2*x-2*y+1;
		}
		delay(200);
		putpixel(X_center+x,Y_center+y,5);
		putpixel(X_center+x,Y_center-y,5);
		putpixel(X_center-x,Y_center+y,5);
		putpixel(X_center-x,Y_center-y,5);
		putpixel(X_center+y,Y_center+x,5);
		putpixel(X_center+y,Y_center-x,5);
		putpixel(X_center-y,Y_center+x,5);
		putpixel(X_center-y,Y_center-x,5);
	}   while(x<y);
	getch();
}+
