#include<iostream.h>
#include<conio.h>
#include<graphics.h>
//GLOBAL VARIABLES
  int x,y;
  
  void page1(int x,int y)
  {

        //background

  setcolor(RED);
  rectangle(0,0,x,y);

  setfillstyle(1,7);
  floodfill(2,2,RED);

  //main interface
  setcolor(BLUE);
  rectangle(120,10,520,200);
  setfillstyle(1,9);
  floodfill(140,60,BLUE);

  setcolor(BLACK);
  settextstyle(4,0,8);
  outtextxy(130,0,"WELCOME");
  settextstyle(1,0,3);
  outtextxy(310,90,"TO");
  settextstyle(1,0,6);
  outtextxy(160,120,"BANK SYSTEM");


  setcolor(15);
  rectangle(70,y/3+50,320,2*y/3+50);
  setfillstyle(1,0);
  floodfill(80,270,15);


  settextstyle(1,0,5);
  outtextxy(100,y/2,"REGISTER");


//settextcotextcolor(3);

  settextstyle(1,0,2);
  outtextxy(130,y/2+50,"(new user)");



  rectangle(320,y/3+50,570,2*y/3+50);
  setfillstyle(1,0);
  floodfill(340,270,15);



  settextstyle(1,0,5);
   outtextxy(380,y/2,"LOGIN");
   
	
  }
  
  void page2(int x, int y)
  {   clrscr();
  setcolor(RED);
  rectangle(0,0,x,y);
  setfillstyle(1,7);
  floodfill(2,2,RED);
  }
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\bgi");

  x=getmaxx();
  y=getmaxy();

  
  page1(x,y);
getch();
page2(x,y);
outtextxy(100,100,"satinder");
textcolor(RED + BLINK);
outtextxy(50,50,"SATINDER");
  getch();
  closegraph();
 }