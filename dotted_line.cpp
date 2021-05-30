#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
int main()
{
	int gd=DETECT, i, gm;
	int x=100,y=100;
	initgraph(&gd,&gm,NULL);
	for(i=1; i<400; i++)
	{
		if(i%15==0)
		{
			i=i+15;	
		}
		putpixel(x+i,y,RED);
		delay(50);
	}
	getch();
}
