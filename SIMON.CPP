#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void formcircles();
void thelightcircles(int patt[],int);
void check(int patt[],int count);
void welcome();
void wrong();
int score;
char name[10];
void main()
{
int patt[40];
randomize();
int k,i=0;
welcome();
formcircles();
	while(i<5)
		{


	k=random(4)+1;
	patt[i]=k;

//delay(1000);
	i++;
	thelightcircles(patt,i);

		}
getch();
wrong();
getch();
}

void formcircles()
{
 int key=1;
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "");
 errorcode = graphresult();
 if (errorcode != grOk)  /* an error occurred */
  {
    cout<<"Graphics error: \n"<<grapherrormsg(errorcode);
    cout<<"Press any key to halt:";
    getch();
    exit(1); /* terminate with an error code */
   }

 setfillstyle(SOLID_FILL,1);
 setcolor(1);
 pieslice(110,100,0,360,10);
 setfillstyle(SOLID_FILL,2);
 setcolor(2);
 pieslice(30,160,0,360,10);
 setcolor(3);
 setfillstyle(SOLID_FILL,3);
 pieslice(180,160,0,360,10);
 setcolor(4);
 setfillstyle(SOLID_FILL,4);
 pieslice(110,220,0,360,10);
outtextxy(30,300,"up=1\nleft=2\nright=3\ndown=4");
outtextxy(30,320,"press spacebar to continue");
outtextxy(30,340,"do not press arrow keys in between");
while(key!=32)
{
key=getch();
}
closegraph();

}


void thelightcircles(int patt[],int count)
{
  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
if (errorcode != grOk)  /* an error occurred */
{
   cout<<"Graphics error: \n"<<grapherrormsg(errorcode);
   cout<<"Press any key to halt:";
   getch();
   exit(1); /* terminate with an error code */
}


  int i,btnarr[40];
  outtextxy(30,300,"up=1\nleft=2\nright=3\ndown=4");


  for(i=0;i<count && !kbhit();i++)
  {     delay(1000);
	if(patt[i]==1)
	  {
	    setfillstyle(SOLID_FILL,1);
setcolor(1);
pieslice(110,100,0,360,30);
setfillstyle(SOLID_FILL,2);
setcolor(2);
pieslice(30,160,0,360,10);
setcolor(3);
setfillstyle(SOLID_FILL,3);
pieslice(180,160,0,360,10);
    setcolor(4);
setfillstyle(SOLID_FILL,4);
pieslice(110,220,0,360,10);
 sound(100);
delay(300);
nosound();
delay(1000);
	    setfillstyle(SOLID_FILL,0);
setcolor(0);
pieslice(110,100,0,360,30);
	    setfillstyle(SOLID_FILL,1);
setcolor(1);
pieslice(110,100,0,360,10);

}
      else if(patt[i]==2)
	{
	    setfillstyle(SOLID_FILL,1);
setcolor(1);
pieslice(110,100,0,360,10);

setfillstyle(SOLID_FILL,2);
setcolor(2);
pieslice(30,160,0,360,30);
setcolor(3);
setfillstyle(SOLID_FILL,3);
pieslice(180,160,0,360,10);
    setcolor(4);
setfillstyle(SOLID_FILL,4);
pieslice(110,220,0,360,10);
sound(200);
delay(300);
nosound();
delay(1000);
setfillstyle(SOLID_FILL,0);
setcolor(0);
pieslice(30,160,0,360,30);
setfillstyle(SOLID_FILL,2);
setcolor(2);
pieslice(30,160,0,360,10);

}
   else if(patt[i]==3)
     {
	    setfillstyle(SOLID_FILL,1);
setcolor(1);
pieslice(110,100,0,360,10);

setfillstyle(SOLID_FILL,2);
setcolor(2);
pieslice(30,160,0,360,10);
setcolor(3);
setfillstyle(SOLID_FILL,3);
pieslice(180,160,0,360,30);
    setcolor(4);
setfillstyle(SOLID_FILL,4);
pieslice(110,220,0,360,10);
sound(300);
delay(300);
nosound();
delay(1000);
setfillstyle(SOLID_FILL,0);
setcolor(0);
pieslice(180,160,0,360,30);
setcolor(3);
setfillstyle(SOLID_FILL,3);
pieslice(180,160,0,360,10);

}
	else if(patt[i]==4)
	{
	    setfillstyle(SOLID_FILL,1);
setcolor(1);
pieslice(110,100,0,360,10);
setfillstyle(SOLID_FILL,2);
setcolor(2);
pieslice(30,160,0,360,10);
setcolor(3);
setfillstyle(SOLID_FILL,3);
pieslice(180,160,0,360,10);
    setcolor(4);
setfillstyle(SOLID_FILL,4);
pieslice(110,220,0,360,30);
sound(400);
delay(300);
nosound();
delay(1000);
setfillstyle(SOLID_FILL,0);
setcolor(0);
pieslice(110,220,0,360,30);
setcolor(4);
setfillstyle(SOLID_FILL,4);
pieslice(110,220,0,360,10);

	}


   }

int c;

outtextxy(250,100,"Press keys now");
for(int z=0;z<count;z++)
{
c=getch();
    if(c==0)
    {
    c=getch();
    }

if(c==72)
{
btnarr[z]=1;
setfillstyle(SOLID_FILL,btnarr[z]);
setcolor(btnarr[z]);
pieslice(110,100,0,360,30);
	delay(600);
	setfillstyle(SOLID_FILL,0);
	setcolor(0);
	pieslice(110,100,0,360,30);
	setfillstyle(SOLID_FILL,1);
	setcolor(1);
	pieslice(110,100,0,360,10);
}

if(c==75)
{
btnarr[z]=2;
setfillstyle(SOLID_FILL,2);
setcolor(2);
pieslice(30,160,0,360,30);
	delay(600);
	setfillstyle(SOLID_FILL,0);
	setcolor(0);
	pieslice(30,160,0,360,30);
	setfillstyle(SOLID_FILL,2);
	setcolor(2);
	pieslice(30,160,0,360,10);
}
if(c==77)
{
btnarr[z]=3;
setfillstyle(SOLID_FILL,btnarr[z]);
setcolor(btnarr[z]);
pieslice(180,160,0,360,30);
	delay(600);
	setfillstyle(SOLID_FILL,0);
	setcolor(0);
	pieslice(180,160,0,360,30);
	setfillstyle(SOLID_FILL,3);
	setcolor(3);
	pieslice(180,160,0,360,10);
}
if(c==80)
{
btnarr[z]=4;
setfillstyle(SOLID_FILL,4);
setcolor(4);
pieslice(110,220,0,360,30);
delay(600) ;
	setfillstyle(SOLID_FILL,0);
	setcolor(0);
	pieslice(110,220,0,360,30);
	setfillstyle(SOLID_FILL,4);
	setcolor(4);
	pieslice(110,220,0,360,10);
}
if(patt[z]==btnarr[z])
{
sound(patt[z]*100);
delay(300);
nosound();

}
else
{
outtextxy(10,250,"uhohhh");
delay(600);
wrong();
}
}
outtext("+1");
score++;
delay(300);
closegraph();
}
void welcome()
{
clrscr();
int key=1;
gotoxy(10,10);
//cout<<setw(200)<<"Welcome"<<endl;
cout<<"Simon Says \n"<<endl;
cout<<"Rules of the game \n";
cout<<"\n 1.This is a memory game. \n";
cout<<"\n 2.There are 4 colored boxes. \n";
cout<<"\n 3.The boxes will glow in a random pattern, starting with one and increasing one at a time \n";
cout<<"\n 4.The player is required to enter the colors in the order in which they appeared \n";
while(key!=13)
{

cout<<"\n Press enter to continue.";
key=getch();
}

}
void wrong()
{
closegraph();
clrscr();
cout<<name<<"you played well\nyour scores are: "<<score;
getch();
}