#include <iostream>
#include <cairo.h>
#include <graphics.h>
#include <ctime>
#include "func.h"

using namespace std;

grid4(int numt)
{
	initwindow(489,193,windowname);
	setcolor(15);
	setbkcolor(8);
	cleardevice();
	settextjustify(1,2);
	settextstyle(8,0,1);
	rectangle(20,20,140,80);
	moveto(20,50);
	lineto(160,50);
	rectangle(20,100,140,160);
	moveto(20,130);
	lineto(160,130);
	lineto(160,49);
	moveto(160,90);
	lineto(340,90);
	rectangle(180,60,300,120);
	rectangle(340,75,460,105);
	short int ran[4] = {0,0,0,0}; char i,t=0;
	while(!ran[0] + !ran[1] + !ran[2] + !ran[3])
	{
		i = rand()%4;
		if(!ran[i])
		{
			if(t<=1) outtextxy(80,20+6+(30*t),buffer[i]);
			if(t>=2) outtextxy(80,40+6+(30*t),buffer[i]);
			ran[i] = 0;
			t++;
			ran[i] = t;
		}
	}
	short int cpx,cpy;
	bool gt[3] = {1,1,1},tf = 0;;
	setfillstyle(1,2);
	while(1)
	{
		if(ismouseclick(WM_LBUTTONDOWN))
		{
			cpx = mousex();
			cpy = mousey();
			clearmouseclick(WM_LBUTTONDOWN);
			if(cpx > 20 && cpx < 140 && cpy > 20 && cpy < 50 && gt[0])
			{
				gt[0] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==1)
					{
						setbkcolor(8);
						outtextxy(240,60+6,buffer[u]);
						bar(21,21,140,50);
						setbkcolor(2);
						outtextxy(80,20+6,buffer[u]);
						ran[u] = 5;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 50 && cpy < 80 && gt[0])
			{
				gt[0] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==2)
					{
						setbkcolor(8);
						outtextxy(240,60+6,buffer[u]);
						bar(21,51,140,80);
						setbkcolor(2);
						outtextxy(80,50+6,buffer[u]);
						ran[u] = 5;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 100 && cpy < 130 && gt[1])
			{
				gt[1] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==3)
					{
						setbkcolor(8);
						outtextxy(240,90+6,buffer[u]);
						bar(21,101,140,130);
						setbkcolor(2);
						outtextxy(80,100+6,buffer[u]);
						ran[u] = 6;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 130 && cpy < 160 && gt[1])
			{
				gt[1] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==4)
					{
						setbkcolor(8);
						outtextxy(240,90+6,buffer[u]);
						bar(21,131,140,160);
						setbkcolor(2);
						outtextxy(80,130+6,buffer[u]);
						ran[u] = 6;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 60 && cpy < 90 && gt[2] && !gt[1] && !gt[0])
			{
				gt[2] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==5)
					{
						setbkcolor(8);
						outtextxy(400,75+6,buffer[u]);
						bar(181,61,300,90);
						setbkcolor(2);
						outtextxy(240,60+6,buffer[u]);
						ran[u] = 7;
						tf = 1;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 90 && cpy < 120 &&  gt[2] && !gt[1] && !gt[0])
			{
				gt[2] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==6)
					{
						setbkcolor(8);
						outtextxy(400,75+6,buffer[u]);
						bar(181,91,300,120);
						setbkcolor(2);
						outtextxy(240,90+6,buffer[u]);
						ran[u] = 7;
						tf = 1;
						break;
					}
				}
			}
		}
		if(tf) break;
		delay(10);
	}
	char temp[] = "Press any key to continue";
	settextjustify(2,0);
	setbkcolor(8);
	setcolor(15);
	outtextxy(getmaxx()-10,getmaxy()-10,temp);
	system("cls");
	cout<<temp<<endl;
	
	if(getch()) closegraph();
	
	system("cls");
	for(int y = 0; y < 4; y++)
	{
		if(ran[y] < 5) ran[y] = 3;
		if(ran[y] == 5 || ran[y] == 6) ran[y] = 2;
		if(ran[y] == 7) ran[y] = 1;
	}
	
	for(int i = 1; i<=3; i++)
	{
		for(int u = 0; u<8; u++)
		{
			if(i==3)	if(ran[u] == i) cout<<"#3-4\t"<<buffer[u]<<endl;
			if(i==2)	if(ran[u] == i) cout<<"#2\t"<<buffer[u]<<endl;
			if(i==1)	if(ran[u] == i) cout<<"#1\t"<<buffer[u]<<endl;
		}
	}
	cout<<endl;
}
