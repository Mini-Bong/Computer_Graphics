#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	int x1=300,y1=300,x2=310,y2=270;
	int i, temp=0;
	initgraph(&gd,&gm,NULL);
	for(i=0; i<5; i++)
	{
	
		bar(300+temp,300,310+temp,270-temp);
		bar(380+temp,300,390+temp,190+temp);
		//bar(470+temp,300,380+temp,300+temp);
		temp+=20;
	}
	getch();
}
