#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

 char arr[10]="WELCOME";
 void entrypage()
 { clrscr();
   setcolor(RED);                           //background rectangle
   rectangle(0,0,650,450);
   setfillstyle(1,3);
   floodfill(2,2,RED);

   settextstyle(4,0,6);
   outtextxy(20,50,"OOPS PROJECT WORK");           //message printing

   settextstyle(3,0,3);
   outtextxy(250,250,"MADE BY :");

   setcolor(0);
   outtextxy(150,290,"1) SHIV CHARAN   (1706512)");          //written by
   outtextxy(150,320,"2) SATINDER SINGH (1706506)");
   outtextxy(150,350,"3) SHIVAM ADOLIA  (1706513)");
   outtextxy(150,380,"4) RANDEEP SINGH  (1706495)");


 }

  void page1()
 { int j=0;

   do
   { clrscr();
     setcolor(RED);                  //background rectangle
     rectangle(0,0,650,450);

     setfillstyle(1,3);
     floodfill(2,2,RED);



    setcolor(14);
    settextstyle(4,0,5);               //welcome screen
    outtextxy(0+j*10,0,arr);

    setcolor(10);
    settextstyle(1,0,3);
    outtextxy(300,90,"TO");

    setcolor(14);
    settextstyle(1,0,6);
    outtextxy(200,120,"3SR BANK");

    setcolor(15);                    //customer rectangle
    rectangle(70,250,325,350);
    setfillstyle(1,0);
    floodfill(80,270,15);

    setcolor(4);
    settextstyle(1,0,4);
    outtextxy(110,270,"CUSTOMER");

    setcolor(15);
    rectangle(325,250,580,350);           //admin rectangle
    setfillstyle(1,0);
    floodfill(340,270,15);

    setcolor(4);
    settextstyle(1,0,4);
    outtextxy(400,270,"ADMIN");
    j++;

    if(j==44)     //condition for restarting the loop
     {j=0;}
    delay(1000);
   }while(!kbhit());

 }


  void admin()                               //Admin page
  { clrscr();
    setcolor(RED);
    rectangle(0,0,650,450);                     //background rectangle
    setfillstyle(1,3);
    floodfill(2,2,RED);

    setcolor(15);                                // Top rectangle
    rectangle(200,100,400,180);
    setfillstyle(1,0);
    floodfill(202,101,15);

    rectangle(200,300,400,380);                 //Bottom rectangle
    floodfill(202,302,15);

    setcolor(RED);                           //message on buttons
    settextstyle(3,0,1);
    outtextxy(250,110,"LIST OF ALL");
    outtextxy(220,140,"ACCOUNT HOLDERS");

    outtextxy(280,320,"EXIT");

  }

  void page2()                                     //Customer Page
  {   clrscr();
     setcolor(RED);            //background rectangle
    rectangle(0,0,650,450);
    setfillstyle(1,3);
    floodfill(2,2,RED);

    setcolor(15);                     //register rectangle
    rectangle(70,200,325,300);
    setfillstyle(1,0);
    floodfill(80,210,15);
    settextstyle(1,0,4);
    setcolor(RED);
    outtextxy(130,220,"REGISTER");

    settextstyle(1,0,2);
    outtextxy(150,250,"(new user)");

    setcolor(15);                      //login button
    rectangle(325,200,580,300);

    setfillstyle(1,0);
    floodfill(326,210,15);

  setcolor(RED);
  settextstyle(1,0,4);
  outtextxy(400,220,"LOGIN");

 }

 void page3()                          //login page
 { clrscr();
   setcolor(4);               //make rectangle on half screen
   rectangle(0,225,650,450);
   setfillstyle(1,3);
   floodfill(10,226,4);

   settextstyle(1,0,1);

   setcolor(RED);               //buttons1
   rectangle(50,250,210,300);
   setfillstyle(1,0);
   floodfill(51,251,RED);

   outtextxy(52,260,"DEPOSITE MONEY");

   setcolor(RED);               //buttons2
   rectangle(440,250,605,300);
   setfillstyle(1,0);
   floodfill(501,251,RED);
   outtextxy(442,260,"WIDHDRAW MONEY");

   setcolor(RED);               //buttons3
   rectangle(245,300,415,350);
   setfillstyle(1,0);
   floodfill(276,301,RED);
   outtextxy(247,310,"BALANCE ENQUIRY");


   setcolor(RED);               //buttons4
   rectangle(50,350,210,400);
   setfillstyle(1,0);
   floodfill(51,351,RED);
   outtextxy(52,360,"MODIFY ACCOUNT");


   setcolor(RED);               //buttons5
   rectangle(440,350,600,400);
   setfillstyle(1,0);
   floodfill(501,351,RED);
   outtextxy(450,360,"CLOSE ACCOUNT");

 }

 void exitpage()                                                 //last page
 {   clrscr();
    setcolor(9);
    rectangle(0,0,650,450);                //background rectangle
    setfillstyle(1,3);
    floodfill(2,2,9);

    setcolor(RED);
    settextstyle(3,0,5);
    outtextxy(240,80,"THANKS ");                 //message on screen
    outtextxy(225,125,"FOR USING");
    settextstyle(1,0,6);
    outtextxy(50,220,"3SR  BANK  SYSTEM");


 }


void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\bgi");

entrypage();
getch();

page1();
getch();

admin();
getch();

page2();
getch();

page3();
getch();

exitpage();

  getch();
  closegraph();
 }