#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	float x1,y1,x2,y2,x3,y3,x4,y4,a,t;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("Enter 300, 200, 350, 200, 45");
	printf("Enter the starting point of line segment: ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the ending point of line segment: ");
	scanf("%f%f",&x2,&y2);
	printf("Enter angle for rotation: ");
	scanf("%f",&a);
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2+5,"Original line");
	t=a*(3.14/180);
	x3=(x1*cos(t))-(y1*sin(t));
	y3=(x1*sin(t))+(y1*cos(t));
	x4=(x2*cos(t))-(y2*sin(t));
	y4=(x2*sin(t))+(y2*cos(t));
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x3+45,y3+45,"Line after rotation");
	outtextxy(x3+55,y3+55,"Prepared by Sayam Maharjan");
	getch();
}

