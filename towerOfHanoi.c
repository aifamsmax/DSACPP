// // C program for the above approach
// #include <conio.h>
// #include <graphics.h>
// #include <stdio.h>

// // Function for moving the Green Disk
// // to Third Tower On Top Of Blue Disk
// void p7()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "7th Phase");
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(850, 500, 950, 550);
// 	floodfill(855, 545, 15);
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(875, 450, 925, 500);
// 	floodfill(880, 495, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(825, 600, 975, 550);
// 	floodfill(830, 555, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Function to find the moving the Blue
// // Disk To Third Tower On Top Of Red Disk
// void p6()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "6th Phase");
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(850, 500, 950, 550);
// 	floodfill(855, 545, 15);
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(275, 600, 325, 550);
// 	floodfill(280, 595, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(825, 600, 975, 550);
// 	floodfill(830, 555, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Function to find the moving Green Disk
// // To the First Tower
// void p5()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "5th Phase");
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(550, 550, 650, 600);
// 	floodfill(555, 595, 15);
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(275, 600, 325, 550);
// 	floodfill(280, 595, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(825, 600, 975, 550);
// 	floodfill(830, 555, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Moving Red Disk To Third Tower
// void p4()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "4th Phase");
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(550, 550, 650, 600);
// 	floodfill(555, 595, 15);
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(575, 500, 625, 550);
// 	floodfill(580, 545, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(825, 600, 975, 550);
// 	floodfill(830, 555, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Function for moving the Green Disk
// // To Second Tower On Top Of Blue Disk
// void p3()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "3rd Phase");
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(550, 550, 650, 600);
// 	floodfill(555, 595, 15);
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(575, 500, 625, 550);
// 	floodfill(580, 545, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(225, 550, 375, 600);
// 	floodfill(230, 590, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Function for moving the Blue Disk
// // To Second Tower
// void p2()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "2nd Phase");
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(550, 550, 650, 600);
// 	floodfill(555, 595, 15);
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(875, 600, 925, 550);
// 	floodfill(880, 595, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(225, 550, 375, 600);
// 	floodfill(230, 590, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Function for moving the Green Disk
// // To Third Tower
// void p1()
// {
// 	getch();
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "1st Phase");
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(875, 600, 925, 550);
// 	floodfill(880, 595, 15);
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(225, 550, 375, 600);
// 	floodfill(230, 590, 15);
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(250, 500, 350, 550);
// 	floodfill(255, 545, 15);

// 	// Calling outline() function
// 	outline();
// }

// // Function to start the animations
// void start()
// {
// 	// Starting Condition
// 	cleardevice();
// 	settextstyle(8, 0, 4);
// 	outtextxy(500, 50, "Beginning State");

// 	// Red Coloring Of Disk
// 	setfillstyle(SOLID_FILL, RED);
// 	rectangle(225, 550, 375, 600);
// 	floodfill(230, 590, 15);

// 	// Blue Coloring Of Disk
// 	setfillstyle(SOLID_FILL, BLUE);
// 	rectangle(250, 500, 350, 550);
// 	floodfill(255, 545, 15);

// 	// Green Coloring Of Disk
// 	setfillstyle(SOLID_FILL, GREEN);
// 	rectangle(275, 450, 325, 500);
// 	floodfill(285, 495, 15);

// 	// calling outline() function
// 	outline();
// }

// // Function to print the outlines of
// // the animations
// void outline()
// {
// 	// Main Base
// 	line(100, 600, 1100, 600);

// 	// 1st Line
// 	line(300, 600, 300, 300);

// 	// 2nd Line
// 	line(600, 600, 600, 300);

// 	// 3rd Line
// 	line(900, 600, 900, 300);

// 	// Printing Message
// 	settextstyle(8, 0, 2);
// 	outtextxy(290, 620, "(1)");
// 	outtextxy(590, 620, "(2)");
// 	outtextxy(890, 620, "(3)");
// }
// // Driver Code
// void main()
// {
// 	int gd = DETECT, gm;

// 	// Initialize of gdriver with
// 	// DETECT macros
// 	initgraph(&gd, &gm, "C:\\turboc3\\bgi");

// 	// Calling start() function
// 	start();

// 	// Calling p1() function
// 	p1();

// 	// Calling p2() function
// 	p2();

// 	// Calling p3() function
// 	p3();

// 	// Calling p4() function
// 	p4();

// 	// Calling p5() function
// 	p5();

// 	// Calling p6() function
// 	p6();

// 	// Calling p7() function
// 	p7();

// 	// Holding screen for a while
// 	getch();

// 	// Close the initialized gdriver
// 	closegraph();
// }
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

int tower[3][10];// the three towers' disks as stack
int top[3];//top of the three stacks
int from,to;//moving 'from' tower number 'to' tower number
int diskInAir;//number of disk moved (1 to n)
int l,b,u;

void push(int to, int diskno)
//putting disk on tower
{
tower[to-1][++top[to-1]]=diskno;
}

int pop(int from)
//take topmost disk from tower
{
return(tower[from-1][top[from-1]--]);
}

void drawStill()
{
int j,i,disk;
cleardevice();
for(j=1;j<=3;j++)
 {
 //draw tower
 setfillstyle(CLOSE_DOT_FILL,WHITE);
 bar(j*l,u,j*l+5,b);
 //draw all disks on tower
 for(i=0;i<=top[j-1];i++)
  {
  disk=tower[j-1][i];
  setfillstyle(SOLID_FILL,1+disk);
  bar(j*l-15-disk*5,b-(i+1)*10,j*l+5+15+disk*5,b-i*10);
  }
 }
}

void animator()
//to show the movement of disk
{
int x,y,dif,sign;
diskInAir=pop(from);
x=from*l;
y=b-(top[from-1]+1)*10;
//taking disk upward from the tower
for(;y>u-20;y-=15)
 {
 drawStill();
 setfillstyle(SOLID_FILL,1+diskInAir);
 bar(x-15-diskInAir*5,y-10,x+5+15+diskInAir*5,y);
 delay(100);
 }
y=u-20;
dif=to*l-x;
sign=dif/abs(dif);
//moving disk towards a target tower
for(;abs(x-to*l)>25;x+=sign*15)
 {
 drawStill();
 setfillstyle(SOLID_FILL,1+diskInAir);
 bar(x-15-diskInAir*5,y-10,x+5+15+diskInAir*5,y);
 delay(100);
 }
x=to*l;
//placing disk on a target tower
for(;y<b-(top[to-1]+1)*10;y+=15)
 {
 drawStill();
 setfillstyle(SOLID_FILL,1+diskInAir);
 bar(x-15-diskInAir*5,y-10,x+5+15+diskInAir*5,y);
 delay(100);
 }
push(to,diskInAir);
drawStill();
}

void moveTopN(int n, int a, int b, int c)
//Move top n disk from tower 'a' to tower 'c'
//tower 'b' used for swapping
{
if(n>=1)
 {
 moveTopN(n-1,a,c,b);
 drawStill();
 delay(1000);
 from=a;
 to=c;
 //animating the move
 animator();
 moveTopN(n-1,b,a,c);
 }
}

void main()
{
int i,gd=DETECT,gm,n;
printf("Enter number of disks");
scanf("%d",&n);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
//setting all tower empty
for(i=0;i<3;i++)
 {
 top[i]=-1;
 }
//putting all disks on tower 'a'
for(i=n;i>0;i--)
 {
 push(1,i);
 }
l=getmaxx()/4;
b=getmaxy()-50;
u=getmaxy()/3+100;
//start solving
moveTopN(n,1,2,3);
delay(4000);
getch();
}