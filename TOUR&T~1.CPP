//____/____ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL _____\______//

//--------- C++ PROJECT TO CREATE TOUR & TRAVELS PROJECT -------------\\
/*________________________________________________________________________*/


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void cname();
void logo();
void about();
void tag();
void facility();
void information();
void details_fill();
void payment();
void details_check();
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
cname();
logo();
getch();
cleardevice();
cname();
about();
getch();
cleardevice();
cname();
tag();
facility();
getch();
cleardevice();
information();
getch();
}
void cname()
{
setcolor(11);
rectangle(150,30,450,100);
rectangle(30,100,620,180);

setcolor(15);
settextstyle(1,0,4);
outtextxy(200,50,"TREASURES");
outtextxy(160,120,"TOUR & TRAVELS");
settextstyle(0,0,2);
setcolor(14);
outtextxy(120,200,"JOBS FILL YOUR POCKET,");
outtextxy(70,230,"BUT ADVENTURES FILL YOUR SOUL.");
}
void logo()
{
// CAR BODY
setcolor(2);
line(50,370,90,370);
arc(110,370,0,180,20);
line(130,370,220,370);
arc(240,370,0,180,20);
line(260,370,300,370);
line(300,370,300,350);
line(300,350,240,330);
line(240,330,200,300);
line(200,300,110,300);
line(110,300,80,330);
line(80,330,50,340);
line(50,340,50,370);

// CAR Windows
setcolor(12);
line(165,305,165,330);
line(165,330,230,330);
line(230,330,195,305);
line(195,305,165,305);

line(160,305,160,330);
line(160,330,95,330);
line(95,330,120,305);
line(120,305,160,305);

// CAR Wheels
setcolor(1);
circle(110,370,17);
circle(240,370,17);

//ROAD
setcolor(13);
line(0,400,639,400);


//bus
setcolor(11);
line(330,270,590,270);
line(330,270,330,380);
line(590,270,590,380);
line(330,380,355,380);
line(405,380,515,380);
line(565,380,590,380);
rectangle(350,280,390,320);
rectangle(410,280,450,320);
rectangle(470,280,510,320);
rectangle(530,280,570,320);
circle(380,380,20);
circle(540,380,20);

setcolor(14);
settextstyle(0,EMPTY_FILL,1);
outtextxy(10,440,"Enter to continue...");
}
void about()
{
setcolor(10);
settextstyle(0,0,1);
outtextxy(10,300,"Contact:");
line(10,310,70,310);
outtextxy(10,330,"Computer Soft Skills");
outtextxy(10,350,"OUR WEBSITE ");
outtextxy(10,370,"TECHTOINFO24.BLOGSPOT.COM ");
outtextxy(10,390,"ROHITTECHSTUDY.BLOGSPOT.COM");
outtextxy(10,410,"VISIT OUR WEBSITE");

//BRANCES
outtextxy(450,300,"Branches:");
line(450,310,520,310);
outtextxy(450,330,"Rewari:  XXXXXXXXXX");
outtextxy(450,350,"Gurgaon:  XXXXXXXXXX");
outtextxy(450,370,"Delhi:  XXXXXXXXXX");
outtextxy(450,390,"Jaipur:  XXXXXXXXXX");
outtextxy(450,410,"Mathura:  XXXXXXXXXX");
setcolor(11);
outtextxy(10,440,"Enter to continue...");
}
void tag()
{
setcolor(9);
settextstyle(0,0,1);
outtextxy(20,270,"India's Leading Travel Brand     Best Price Guaranteed.");
}
void facility()
{
settextstyle(0,0,2);
setcolor(5);
outtextxy(200,300,"OUR FACITIES");
settextstyle(0,0,1);
setcolor(5);
outtextxy(120,350,"Vichels");
line(120,360,175,360);
setcolor(10);
outtextxy(50,370,"Scorpio");
outtextxy(50,390,"Qualis");
outtextxy(50,410,"Bolero");
outtextxy(50,430,"Traveller");
outtextxy(50,450,"Verna");
outtextxy(50,470,"Volvo bus");
outtextxy(170,370,"Wagonr");
outtextxy(170,390,"Tata Sumo");
outtextxy(170,410,"Tavera");
outtextxy(170,430,"Innova");
outtextxy(170,450,"Ertiga");
outtextxy(170,470,"Eeco");
setcolor(5);
outtextxy(370,350,"Cities");
line(370,360,415,360);
setcolor(10);
outtextxy(320,370,"Goa");
outtextxy(320,390,"Mumbai");
outtextxy(320,410,"Delhi");
outtextxy(320,430,"Haridwar");
outtextxy(320,450,"Shimla");
outtextxy(320,470,"Manali");
outtextxy(440,370,"Jammu & Kashmir");
outtextxy(440,390,"Kerala");
outtextxy(440,410,"Gujrat");
outtextxy(440,430,"Dehradun");
outtextxy(440,450,"Shirdi");
outtextxy(440,470,"Jaipur");
}
void information()
{
int i;
char b;
do
{
printf("\n 1. Enter details...");
printf("\n 2. Check details...");
printf("\n 3. Payment...");
printf("\n Enter your choice...");
scanf("\n%d",&i);
switch(i)
{
case 1:
details_fill();
printf("\n=======================================");
break;
case 2:
details_check();
printf("\n==============================================");
break;
case 3:
payment();
printf("\n==========================================");
break;
default:
printf("\n Invalid choice... ");
printf("\n==============================================");
}
printf("\n Enter 'y' OR 'Y' to continue...");
scanf("\n%s",&b);
}
while(b=='y'||b=='Y');
}
void details_fill()
{
FILE *fptr;
char name[20];
int age;
float salary;
char vichel[20];
char city[20];
int members;
fptr = fopen("treasures.txt", "w");
if (fptr == NULL)
{
printf("\nFile does not exists \n");
}
printf("Enter the name \n");
scanf("\n%s", name);
fprintf(fptr,"Name      = %s\n",name);
printf("Enter the age\n");
scanf("\n%d", &age);
fprintf(fptr,"Age       = %d\n",age);
printf("Enter the vichel \n");
scanf("\n%s", vichel);
fprintf(fptr,"Vichel    = %s\n",vichel);
printf("Enter the city \n");
scanf("\n%s", city);
fprintf(fptr,"City      = %s\n", city);
printf("Enter the no. of members\n");
scanf("\n%d", &members);
fprintf(fptr,"Members   = %d\n",members);
printf("\n Your details are successfully registered \n");
fclose(fptr);
}
void details_check()
{
FILE *fptr;
char filename[15];
char ch;
printf("\nEnter the filename to be open...");
scanf("\n%s", filename);
fptr = fopen(filename, "r");
if (fptr == NULL)
{
printf("Cannot open file \n");
}
ch = fgetc(fptr);
while (ch != EOF)
{
printf ("%c", ch);
ch = fgetc(fptr);
}
fclose(fptr);
}
void payment()
{
FILE *fptr;
char name[20];
long int  cardno;
int cvv;
int pin;
clrscr();
fptr = fopen("hello.txt", "w");
if (fptr == NULL)
{
printf("File does not exists \n");

}
printf("Enter the name \n");
scanf("\n%s", name);
fprintf(fptr,"Name  = %s\n", name);
printf("Enter the cardno\n");
scanf("\n%ld", &cardno);
fprintf(fptr,"Your card no:  = %ld\n", cardno);
printf("Enter the cvv \n");
scanf("\n%d", &cvv);
fprintf(fptr,"Your cvv is:  = %d\n", cvv);
printf("Enter the pin\n");
scanf("\n%d", pin);
fprintf(fptr,"Your pin is:  = %d\n", pin);
printf("\n Your transaction is being proceed");
delay(10);
printf("\t.");
delay(10);
printf("\t.");
delay(10);
printf("\t.");
delay(10);
printf("\n\n transaction completed");
delay(10);
printf("\n\n NOTE : your details are keep in private");
fclose(fptr);
}



/*---------------- I HOPE YOU LIKE THIS C++ PROJECT ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/


