#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("Enter 120, 100, 150, 100, 2, 2");
	printf("Enter the starting point of line segment: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter the ending point of line segment: ");
	scanf("%f %f",&x2,&y2);
	printf("Enter scaling factors sx, sy: ");
	scanf("%f%f",&sx,&sy);
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2+5,"Original line");
	x3=x1*sx;
	y3=y1*sy;
	x4=x2*sx;
	y4=y2*sy;
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x3+5,y3+5,"Line after scaling");
	outtextxy(x3+15,y3+15,"Prepared by Sayam Maharjan");
	getch();
}
