#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm;
	float shx,shy;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("Enter 0.5");
	printf("Enter shear factor shy along y-axis :");
	scanf("%f",&shy);
	line(100,10,200,10);
	line(200,10,200,200);
	line(200,200,100,200);
	line(100,200,100,10);
	printf("Y-shear");
	setcolor(12);
	line(100,10+(shy*100),200,10+(shy*200));
	line(200,10+(shy*200),200,200+(shy*200));
	line(200,200+(shy*200),100,200+(shy*100));
	line(100,200+(shy*100),100,10+(shy*100));
	outtextxy(100, 320, "Prepared by Sayam Maharjan");
	getch();
	closegraph();
}
