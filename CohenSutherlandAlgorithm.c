#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(){
	int rcode_begin[4] = {0, 0, 0, 0}, rcode_end[4] = {0, 0, 0, 0}, region_code[4];
	int W_xmax, W_ymax, W_xmin, W_ymin, flag = 0;
	float slope;
	int x, y, x1, y1, i, xc, yc;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Enter 100, 100, 450, 450, 500, 200, 50, 300");
	printf("Enter XMin, YMin: ");
	scanf("%d%d", &W_xmin, &W_ymin);
	printf("Enter XMax, YMax: ");
	scanf("%d%d", &W_xmax, &W_ymax);
	printf("Enter intial point x1, y1: ");
	scanf("%d %d", &x, &y);
	printf("Enter final point x2, y2: ");
	scanf("%d %d", &x1, &y1);
	cleardevice();
	rectangle(W_xmin, W_ymin, W_xmax, W_ymax);
	line(x, y, x1, y1);
	line(0, 0, 600, 0);
	line(0, 0, 0, 600);

	if(y > W_ymax){
		rcode_begin[0] = 1;
		flag = 1;
	}
	if(y < W_ymin){
		rcode_begin[1] = 1;
		flag = 1;
	}
	if(x > W_xmax){
		rcode_begin[2] = 1;
		flag = 1;
	}
	if(x < W_xmin){
		rcode_begin[3] = 1;
		flag = 1;
	}

	if(y1 > W_ymax){
		rcode_end[0] = 1;
		flag = 1;
	}
	if(y1 < W_ymin){
		rcode_end[1] = 1;
		flag = 1;
	}
	if(x1 > W_xmax){
		rcode_end[2] = 1;
		flag = 1;
	}
	if(x1 < W_xmin){
		rcode_end[3] = 1;
		flag = 1;
	}
	if(flag == 0){
		printf("Line is already inside the window!");
	}
	flag = 1;
	for(i = 0; i < 4; i++){
		region_code[i] = rcode_begin[i] && rcode_end[i];
		if(region_code[i] == 1){
			flag = 0;
		}
		if(flag==0){
			printf("Line is completely outside the window!");
		}else{
			slope=(float)(y1-y)/(x1-x);
		}
		if(rcode_begin[2] == 0 && rcode_begin[3] == 1){
			y = y + (float)(W_xmin-x) * slope ;
			x = W_xmin;
		}
		if(rcode_begin[2] == 1 && rcode_begin[3] == 0){
			y = y + (float)(W_xmax-x) * slope ;
			x = W_xmax;
		}
		if(rcode_begin[0] == 1 && rcode_begin[1] == 0){
			x = x + (float)(W_ymax - y) / slope ;
			y = W_ymax;
		}
		if(rcode_begin[0] == 0 && rcode_begin[1] == 1){
			x = x + (float)(W_ymin - y) / slope ;
			y = W_ymin;
		}
		if(rcode_end[2] == 0 && rcode_end[3] == 1){
			y1 = y1 + (float)(W_xmin - x1) * slope ;
			x1 = W_xmin;
		}
		if(rcode_end[2] == 1 && rcode_end[3] == 0){
			y1 = y1 + (float)(W_xmax - x1) * slope ;
			x1 = W_xmax;
		}
		if(rcode_end[0] == 1 && rcode_end[1] == 0){
			x1 = x1 + (float)(W_ymax - y1) / slope ;
			y1 = W_ymax;
		}
		if(rcode_end[0] == 0 && rcode_end[1] == 1){
			x1 = x1 + (float)(W_ymin - y1) / slope ;
			y1 = W_ymin;
		}
	}
	delay(1000);
	clearviewport();
	rectangle(W_xmin, W_ymin, W_xmax, W_ymax);
	line(0, 0, 600, 0);
	line(0, 0, 0, 600);
	setcolor(RED);
	line(x, y, x1, y1);
	outtextxy(100, 350, "Prepared by Sayam Maharjan");
	getch();
	closegraph();
}
