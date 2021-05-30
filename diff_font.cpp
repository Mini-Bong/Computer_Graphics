#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	int i,y;
	initgraph(&gd,&gm,NULL);
	for(i=0; i<11; i++)
	{
		setcolor(i);
		settextstyle(i,0,5);
		outtextxy(0,y,"HELLO Manish!");
		y=y+40;
	}
	getch();
	return 0;
}
