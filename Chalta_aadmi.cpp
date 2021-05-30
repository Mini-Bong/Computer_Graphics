#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,NULL);
	for(i=0;i<1000;i+=2)
	{
		setcolor(WHITE);
		circle(20+i,300,20);   //head
		line(20+i,320,20+i,400); //body
		line(20+i,350,50+i,370);//lft
		line(20+i,350,5+i,370);//rt
		/*line(20+i,400,50+i,420);//lft foot
		line(20+i,400,3+i,420);//right foot*/
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL,RED);
		circle(90+i,400,20);
		floodfill(90+i,400,YELLOW);
		if(i%2==0)
		{
			line(20+i,400,50+i,420); //leftleg
			line(20+i,400,3+i,420);//right leg
			delay(50);
		}
		else
		{
			line(30+i,400,50+i,340);
			delay(50);
		}
		delay(100);
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}
