#include <iostream>
#include <graphics.h>
#include <ctime>

grid8(int numt)
{
	initwindow(489+160, 213+180, windowname);
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
	lineto(320,90);
	rectangle(180,60,300,120);
	rectangle(20,20+160,140,80+160);
	moveto(20,50+160);
	lineto(160,50+160);
	rectangle(20,100+160,140,160+160);
	moveto(20,130+160);
	lineto(160,130+160);
	lineto(160,49+160);
	moveto(160,90+160);
	lineto(320,90+160);
	rectangle(180,60+160,300,120+160);
	line(320,90,320,90+161);
	line(320,80+90,500,80+90);
	rectangle(340,50+90,460,120+80);
	rectangle(500,50+105,620,105+80);
	
	short int ran[8] = {0,0,0,0,0,0,0,0}; char i,t=0;
	while(!ran[0] + !ran[1] + !ran[2] + !ran[3] + !ran[4] + !ran[5] + !ran[6] + !ran[7])
	{
		i = rand()%8;
		if(!ran[i])
		{
			if(t==0 || t==1) outtextxy(80,20+6+(30*t),buffer[i]);
			if(t==2 || t==3) outtextxy(80,40+6+(30*t),buffer[i]);
			if(t==4 || t==5) outtextxy(80,60+6+(30*t),buffer[i]);
			if(t==6 || t==7) outtextxy(80,80+6+(30*t),buffer[i]);
			t++;
			ran[i] = t;
		}
	}
	short int cpx,cpy;
	bool gt[7] = {1,1,1,1,1,1,1},tf = 0;
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
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==1)
					{
						setbkcolor(8);
						outtextxy(240,60+6,buffer[u]);
						bar(21,21,140,50);
						setbkcolor(2);
						outtextxy(80,20+6,buffer[u]);
						ran[u] = 9;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 50 && cpy < 80 && gt[0])
			{
				gt[0] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==2)
					{
						setbkcolor(8);
						outtextxy(240,60+6,buffer[u]);
						bar(21,51,140,80);
						setbkcolor(2);
						outtextxy(80,50+6,buffer[u]);
						ran[u] = 9;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 100 && cpy < 130 && gt[1])
			{
				gt[1] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==3)
					{
						setbkcolor(8);
						outtextxy(240,90+6,buffer[u]);
						bar(21,101,140,130);
						setbkcolor(2);
						outtextxy(80,100+6,buffer[u]);
						ran[u] = 10;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 130 && cpy < 160 && gt[1])
			{
				gt[1] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==4)
					{
						setbkcolor(8);
						outtextxy(240,90+6,buffer[u]);
						bar(21,131,140,160);
						setbkcolor(2);
						outtextxy(80,130+6,buffer[u]);
						ran[u] = 10;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 60 && cpy < 90 && gt[4] && !gt[1] && !gt[0])
			{
				gt[4] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==9)
					{
						setbkcolor(8);
						outtextxy(400,140+6,buffer[u]);
						bar(181,61,300,90);
						setbkcolor(2);
						outtextxy(240,60+6,buffer[u]);
						ran[u] = 13;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 90 && cpy < 120 && gt[4] && !gt[1] && !gt[0])
			{
				gt[4] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==10)
					{
						setbkcolor(8);
						outtextxy(400,140+6,buffer[u]);
						bar(181,91,300,120);
						setbkcolor(2);
						outtextxy(240,90+6,buffer[u]);
						ran[u] = 13;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 180 && cpy < 210 && gt[2])
			{
				gt[2] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==5)
					{
						setbkcolor(8);
						outtextxy(240,220+6,buffer[u]);
						bar(21,181,140,210);
						setbkcolor(2);
						outtextxy(80,180+6,buffer[u]);
						ran[u] = 11;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 210 && cpy < 240 && gt[2])
			{
				gt[2] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==6)
					{
						setbkcolor(8);
						outtextxy(240,220+6,buffer[u]);
						bar(21,211,140,240);
						setbkcolor(2);
						outtextxy(80,210+6,buffer[u]);
						ran[u] = 11;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 260 && cpy < 290 && gt[3])
			{
				gt[3] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==7)
					{
						setbkcolor(8);
						outtextxy(240,250+6,buffer[u]);
						bar(21,261,140,290);
						setbkcolor(2);
						outtextxy(80,260+6,buffer[u]);
						ran[u] = 12;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 290 && cpy < 320 && gt[3])
			{
				gt[3] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==8)
					{
						setbkcolor(8);
						outtextxy(240,250+6,buffer[u]);;
						bar(21,291,140,320);
						setbkcolor(2);
						outtextxy(80,290+6,buffer[u]);
						ran[u] = 12;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 220 && cpy < 250 && gt[5] && !gt[2] && !gt[3])
			{
				gt[5] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==11)
					{
						setbkcolor(8);
						outtextxy(400,170+6,buffer[u]);
						bar(181,221,300,250);
						setbkcolor(2);
						outtextxy(240,220+6,buffer[u]);
						ran[u] = 14;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 250 && cpy < 280 && gt[5] && !gt[2] && !gt[3])
			{
				gt[5] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==12)
					{
						setbkcolor(8);
						outtextxy(400,170+6,buffer[u]);
						bar(181,251,300,280);
						setbkcolor(2);
						outtextxy(240,250+6,buffer[u]);
						ran[u] = 14;
						break;
					}
				}
			}
			if(cpx > 341 && cpx < 460 && cpy > 140 && cpy < 170 && gt[6] && !gt[4] && !gt[5])
			{
				gt[6] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==13)
					{
						setbkcolor(8);
						outtextxy(560,155+6,buffer[u]);
						bar(341,141,460,170);
						setbkcolor(2);
						outtextxy(400,140+6,buffer[u]);
						ran[u] = 15;
						tf = 1;
						break;
					}
				}
			}
			if(cpx > 341 && cpx < 460 && cpy > 170 && cpy < 200 && gt[6] && !gt[4] && !gt[5])
			{
				gt[6] = 0;
				for(int u = 0; u < 8; u++)
				{
					if(ran[u]==14)
					{
						setbkcolor(8);
						outtextxy(560,155+6,buffer[u]);
						bar(341,171,460,200);
						setbkcolor(2);
						outtextxy(400,170+6,buffer[u]);
						ran[u] = 15;
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
	
	for(int y = 0; y < 8; y++)
	{
		if(ran[y] <= 8) ran[y] = 4;
		if(ran[y]<=12 && ran[y]>8) ran[y] = 3;
		if(ran[y] == 13 || ran[y] == 14) ran[y] = 2;
		if(ran[y] == 15) ran[y] = 1;
	}
	
	for(int i = 1; i<=4; i++)
	{
		for(int u = 0; u<8; u++)
		{
			if(i==4)	if(ran[u] == i) cout<<"#5-8\t"<<buffer[u]<<endl;
			if(i==3)	if(ran[u] == i) cout<<"#3-4\t"<<buffer[u]<<endl;
			if(i==2)	if(ran[u] == i) cout<<"#2\t"<<buffer[u]<<endl;
			if(i==1)	if(ran[u] == i) cout<<"#1\t"<<buffer[u]<<endl;
		}
	}
	cout<<endl;
}
