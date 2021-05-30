#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
void firstCrown()
{
 setfillstyle(SOLID_FILL,GREEN);
 line(300,40,200,100);
 line(300,40,400,100);
 ellipse(300,100,180,360,98,30);
 floodfill(310,50,WHITE);
}
void secondCrown()
{
 setfillstyle(SOLID_FILL,GREEN);
 line(250,125,180,160);
 line(350,125,420,160);
 ellipse(300,160,180,360,120,30);
 floodfill(260,130,WHITE);
}
void thirdCrown()
{
 setfillstyle(SOLID_FILL,GREEN);
 line(230,185,150,230);
 line(360,185,440,230);
 ellipse(295,230,180,360,145,30);
 floodfill(250,190,WHITE);
}
void trunk()
{
 setfillstyle(SOLID_FILL,BROWN);
 line(280,260,280,350);
 line(320,260,320,350);
 line(280,350,320,350);
 floodfill(285,340,WHITE);
}
int main()
{

 int gd = DETECT , gm ;
 initgraph(&gd,&gm,NULL);  //Write the Path of BGI folder

 int i,n;
 cout<<"Enter Number of times you want to change the color of tree:";
 cin>>n;
 for(i=0;i<n;i++)
 {
 //=============================== First Crown ================================
  firstCrown();
  secondCrown();
  thirdCrown();
  trunk();
  //To Change the color of first Crown
  setfillstyle(SOLID_FILL,RED);
  line(300,40,200,100);
  line(300,40,400,100);
  ellipse(300,100,180,360,98,30);
  floodfill(310,50,WHITE);
  //To display a Text Message
  setcolor(RED);
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 10);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(300,370,"Wish You");
  delay(2000);
  graphdefaults();
  cleardevice();

 //============================= Second Crown ===============================
  firstCrown();
  secondCrown();
  thirdCrown();
  trunk();
  //To Change the color of Second Crown
  setfillstyle(SOLID_FILL,MAGENTA);
  line(250,125,180,160);
  line(350,125,420,160);
  ellipse(300,160,180,360,120,30);
  floodfill(260,130,WHITE);
  //To display a Text Message
  setcolor(MAGENTA);
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 10);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(300,370,"A Merry");
  delay(2000);
  graphdefaults();
  cleardevice();

 //============================= Third Crown ================================
  firstCrown();
  secondCrown();
  thirdCrown();
  trunk();
  //To Change the color of Third Crown
  setfillstyle(SOLID_FILL,BLUE);
  line(230,185,150,230);
  line(360,185,440,230);
  ellipse(295,230,180,360,145,30);
  floodfill(250,190,WHITE);
  //To display a Text Message
  setcolor(MAGENTA);
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 10);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(300,370,"Christmas");
  delay(2000);
  graphdefaults();
  cleardevice();
 }
 getch();
 closegraph();
 return 0;
}
