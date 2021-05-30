#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void kite(int i)
{
 int x[4], y[4];
 double t;
 /*================================= Kite ==================================*/
 line(150+i,100+i,100+i,160+i);
 line(150+i,100+i,200+i,160+i);

 line(100+i,160+i,150+i,210+i);
 line(200+i,160+i,150+i,210+i);

 line(150+i,210+i,130+i,230+i);
 line(150+i,210+i,170+i,230+i);
 line(130+i,230+i,170+i,230+i);

 line(150+i,100+i,150+i,210+i);
 line(100+i,160+i,200+i,160+i);

 /*================================= Kite Thread ==================================*/
 x[0]=150+i;
 y[0]=210+i;
 x[1]=200+i;
 y[1]=250+i;
 x[2]=250+i;
 y[2]=130+i;
 x[3]=500+i;
 y[3]=500+i;
 for (t = 0.0; t < 1.0; t += 0.0005)
 {
  double xt = pow (1-t, 3) * x[0] + 3 * t * pow (1-t, 2) * x[1] +
	      3 * pow (t, 2) * (1-t) * x[2] + pow (t, 3) * x[3];

  double yt = pow (1-t, 3) * y[0] + 3 * t * pow (1-t, 2) * y[1] +
	      3 * pow (t, 2) * (1-t) * y[2] + pow (t, 3) * y[3];

  putpixel (xt, yt, WHITE);
 }
}
//================================ Clouds ==================================/
void clouds()
{
 //================================ Middle cloud===============================
 ellipse(200,30,60,240,10,15);
 ellipse(225,20,345,165,20,15);
 ellipse(262,27,340,160,20,15);
 ellipse(268,42,230,50,20,10);
 ellipse(226,46,163,340,31,15);
 ellipse(300,21,20,182,21,19);
 ellipse(325,31,290,100,21,15);
 ellipse(299,45,228,20,33,11);

 //============================== Left Cloud ==================================
 ellipse(40,30,60,240,10,15);
 ellipse(65,20,345,165,20,15);
 ellipse(105,27,340,160,20,15);
 ellipse(109,42,230,50,20,10);
 ellipse(66,46,163,340,31,17);

 //============================== Right Cloud ==================================
 ellipse(450,30,60,240,10,15);
 ellipse(475,20,345,165,20,15);
 ellipse(512,27,340,160,20,15);
 ellipse(518,42,230,50,20,10);
 ellipse(476,46,163,340,31,15);
}

void main()
{
	// clrscr();
 int gm,gd=DETECT;
 initgraph(&gd,&gm,NULL);      //Write the Path of BGI folder
// clrscr();
 for(int k=1;k<=2;k++) // Make the changes to execute for some more time
 {
  for(int i=0;i<61;i++)    // The Kite is falling down
  {
   kite(i);
   clouds();

   if(i>=60)
   {
    for(int j=0;j<60;j++)   // The Kite is raising in sky
    {
     int l=i-j;
     kite(l);
     clouds();

     delay(120);
     cleardevice();
    }
   }
   delay(120);
   cleardevice();
  }
 }
 getch();
 closegraph();
}
