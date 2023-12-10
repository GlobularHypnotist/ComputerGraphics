#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundary_fill(int x, int y, int fcolor, int bcolor){
	if((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor)){
		delay(10);
		putpixel(x, y, fcolor);
		boundary_fill(x + 1, y, fcolor, bcolor);
		boundary_fill(x , y + 1, fcolor, bcolor);
		boundary_fill(x + 1, y + 1, fcolor, bcolor);
		boundary_fill(x - 1, y - 1, fcolor, bcolor);
		boundary_fill(x - 1, y, fcolor, bcolor);
		boundary_fill(x , y - 1, fcolor, bcolor);
		boundary_fill(x - 1, y + 1, fcolor, bcolor);
		boundary_fill(x + 1, y - 1, fcolor, bcolor);
	}
}
void main(){
	int x, y, fcolor, bcolor;
	int gd = DETECT, gm;
	printf("Enter 70, 55, 15, 6");
	printf("Enter the seed point (x,y): ");
	scanf("%d%d", &x, &y);
	printf("Enter boundary color: ");
	scanf("%d", &bcolor);
	printf("Enter new color: ");
	scanf("%d", &fcolor);
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	rectangle(50, 50, 100, 100);
	boundary_fill(x, y, fcolor, bcolor);
	outtextxy(150, 150, "Prepared by Sayam Maharjan");
	getch();
}

