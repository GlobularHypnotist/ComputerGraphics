#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int x, y, x1, y1, x2, y2, p, dx, dy;
	int gd = DETECT, gm;
	printf("Enter 10, 20, 100, 150");
	printf("Enter (x1, y1): ");
	scanf("%d%d", &x1, &y1);
	printf("Enter (x2, y2): ");
	scanf("%d%d", &x2, &y2);
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	x = x1;
	y = y1;
	dx = x2 - x1;
	dy = y2 - y1;
	putpixel(x, y, 2);
	p = (2 * dy - dx);
	while(x <= x2){
		if(p < 0){
			x = x + 1;
			p = p + 2 * dy;
		}else{
			x = x + 1;
			y = y + 1;
			p = p + (2 * dy) - (2 * dx);
		}
		delay(100);
		putpixel(x, y, 7);
	}
	outtextxy(200, 20, "BLA");
	outtextxy(x1 + 5, y1 - 5, "(x1, y1)");
	outtextxy(x2 - 35, y2 - 35, "(x2, y2)");
	outtextxy(x2 - 25, y2 - 25, "Prepared by Sayam Maharjan");
	getch();
	closegraph();
}
