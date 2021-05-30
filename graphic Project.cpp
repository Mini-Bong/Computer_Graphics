#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void printBall(int x1,int y1,int r,int color)
{
	int i,arrX[360],arrY[360],count=0;
	float s,c;
	int x,y;
	for(i=0; i<360; i++)
	{
		c=cos(i*0.01746);
		s=sin(i*0.01746);
		x=x1+(r*c);//(y2-y1)*s;
		y=y1-(r*s);//(y2-y1)*c;
		arrX[count]=x;
		arrY[count]=y;
		count++;
		putpixel(x,y,color);
	}
	setcolor(color);
	for(i=1; i<count; i++)
	{
		line(arrX[i],arrY[i],arrX[(2*i)%count], arrY[(i*2)%count]);
		delay(30);
	}	
}
int main()
{
	int gd=DETECT,gm,i;
	int x,y, arrX[360], arrY[360],count=0;
	int a,b, arr1X[360],arr1Y[360],count1=0;
	int midx=650,midy=600;
	float c,s,c1,s1;
	initgraph(&gd,&gm,NULL);
	printBall(300,200,100,5);
	printBall(650,200,150,3);
	printBall(1000,200,100,5);
	line(650,350,650,600);
	for (i = 1; i <16; i++) 
	{
        if (i == DARKGRAY)
                continue;
        /* top portion of star */
        setcolor(i);
        setfillstyle(SOLID_FILL, i);
        line(midx, midy - 60, midx + 18, midy);
        line(midx, midy - 60, midx, midy + 18);
        line(midx + 18, midy, midx, midy + 18);
        floodfill(midx + 1, midy + 1, i);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        line(midx + 18, midy, midx + 84, midy);
        line(midx + 18, midy, midx, midy + 18);
        line(midx + 84, midy, midx, midy + 18);
        floodfill(midx + 31, midy + 1, DARKGRAY);

        /* right portion of star */
        setcolor(i);
        setfillstyle(SOLID_FILL, i);
        line(midx + 84, midy, midx, midy + 18);
        line(midx + 84, midy, midx + 24, midy + 30);
        line(midx + 24, midy + 30, midx, midy + 18);
        floodfill(midx  + 10, midy + 20, i);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        line(midx + 24, midy + 30, midx, midy + 18);
        line(midx + 24, midy + 30, midx + 66, midy + 96);
        line(midx + 66, midy + 96, midx, midy + 18);
        floodfill(midx + 20, midy + 40, DARKGRAY);

        /* bottom right portion of star */
        setcolor(i);
        setfillstyle(SOLID_FILL, i);
        line(midx + 66, midy + 96, midx, midy + 18);
        line(midx + 66, midy + 96, midx, midy + 54);
        line(midx, midy + 54, midx, midy + 18);
        floodfill(midx + 1, midy + 54, i);
        
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        line(midx, midy + 54, midx, midy + 18);
        line(midx, midy + 18, midx - 66, midy + 96);
        line(midx - 66, midy + 96, midx, midy + 54);
        floodfill(midx - 1, midy + 54, DARKGRAY);

        /* bottom left portion of star */
        setcolor(i);
        setfillstyle(SOLID_FILL, i);
        line(midx, midy + 18, midx - 66, midy + 96);
        line(midx - 24, midy + 30, midx - 66, midy + 96);
        line(midx - 24, midy + 30, midx, midy + 18);
        floodfill(midx - 15, midy + 30, i);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        line(midx - 24, midy + 30, midx, midy + 18);
        line(midx - 84, midy, midx - 24, midy + 30);
        line(midx - 84, midy, midx, midy + 18);
        floodfill(midx-24, midy+20, DARKGRAY);

        /* left portion of star */
        setcolor(i);
        setfillstyle(SOLID_FILL, i);
        line(midx - 18, midy, midx - 84, midy);
        line(midx - 84, midy, midx, midy + 18);
        line(midx - 18, midy, midx, midy + 18);
        floodfill(midx - 18, midy + 1, i);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        line(midx - 18, midy, midx, midy + 18);
        line(midx, midy - 60, midx - 18, midy);
        line(midx, midy - 60, midx, midy + 18);
        floodfill(midx - 5, midy - 10, DARKGRAY);
        
        //good morning
        setcolor(i+1);
        settextstyle(6,0,10);
        outtextxy(120,450,"Good");
        setcolor(i+2);
        outtextxy(700,450,"Morning!");
    	delay(2000);
    	if(i==15)
    	{
    		i=1;
		}
    }
	getch();
	closegraph();
	return 0;
}

