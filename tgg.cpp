#include <iostream>
#include <graphics.h>
#include <ctime>
#include <windows.h>

/*	Êîëè÷åñòâî âàðèàíòîâ îøèáîê: 2
	1 - Êîëè÷åñòâî êîìàíä íå ÿâëÿåòñÿ äîïóñòèìûì
	2 - Ïðåâûøåíî êîëè÷åñòâî ñèìâîëîâ â íàçâàíèè êîìàíäû
	3 - 
*/
//===============[Êîíñòàíòû]===============
const short int ttl = 10;//Êîëè÷åñòâî ñèìâîëîâ â íàçâàíèè êîìàíäû
const char windowname[] = "Tournament grid generator";//Íàçâàíèå îêíà

//===============[typedef]===============
typedef char text[ttl+1];//Ïåðåìåííàÿ äëÿ ìàññèâà íàçâàíèé êîìàíä

//===============[Ãëîáàëüíûå ïåðåìåííûå]===============
text buffer[32] = {"team# 1","team# 2","team# 3","team# 4","team# 5","team# 6","team# 7","team# 8","team# 9","team# 10","team# 11","team# 12","team# 13","team# 14","team# 15","team# 16","team# 17","team# 18","team# 19","team# 20","team# 21","team# 22","team# 23","team# 24","team# 25","team# 26","team# 27","team# 28","team# 29","team# 30","team# 31","team# 32"};//Ìàêñèìàëüíîå êîëè÷åñâî êîìàíä (ìàññèâ íàçâàíèé)
int placegrid[32];//Ìàêñèìàëüíîå êîëè÷åñâî êîìàíä (ìàññèâ çàíÿòûõ ìåñò)

int grid4(int);
int grid8(int);

using namespace std;

main()
{
	setlocale(LC_ALL, "Russian");//Ðóññêèé ÿçûê
	system("color 80");
	srand(time(0));
	char inputtn[100];
	int numbert = 8;
	string check;
	/*cout<<"Ââåäèòå êîëè÷åñòâî êîìàíä ðàâíîå 4/8/16/32."<<endl;
	cin>>numbert;
	while(numbert!=4 && numbert!=8 && numbert!=16 && numbert!=32)
	{
		numbert = 0;
		cout<<"Êîä îøèáêè: 1. Êîëè÷åñòâî êîìàíä äîëæíî áûòü ðàâíî 4/8/16/32."<<endl;
		cin>>numbert;
	}
	for(int i=0; i<numbert; i++)
	{
		cout<<"Ââåäèòå íàçâàíèå êîìàíäû "<<i+1<<" íà àíãëèéñêîì ÿçûêå:"<<endl;
		cin>>inputtn;
		while(strlen(inputtn)>ttl)
		{
			strcpy(inputtn,"");
			cout<<inputtn<<endl;
			cout<<"Êîä îøèáêè: 2. Êîëè÷åñòâî ñèìâîëîâ íå äîëæíî ïðåâûøàòü "<<ttl<<"."<<endl;
			cin>>inputtn;
		}
		strcpy(buffer[i], inputtn);
	}*/
	switch(numbert)
	{
		case 4: 
		{
			grid4(numbert);
			break;
		}
		case 8:
		{
			grid8(numbert);
			break;
		}
		case 16:
		{
			break;
		}
		case 32:
		{
			break;
		}
	}
	system("pause");
	return 0;
}

grid4(int numt)
{
	initwindow(489,193,windowname);
	setcolor(15);
	setbkcolor(8);
	cleardevice();
	settextjustify(1,2);
	settextstyle(8,0,1);
	//Ñîçäàíèå ñåòêè
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
	if(ran[0] == 1) cout<<"#1\t"<<buffer[0]<<endl;
	if(ran[1] == 1) cout<<"#1\t"<<buffer[1]<<endl;
	if(ran[2] == 1) cout<<"#1\t"<<buffer[2]<<endl;
	if(ran[3] == 1) cout<<"#1\t"<<buffer[3]<<endl;
	if(ran[0] == 2) cout<<"#2\t"<<buffer[0]<<endl;
	if(ran[1] == 2) cout<<"#2\t"<<buffer[1]<<endl;
	if(ran[2] == 2) cout<<"#2\t"<<buffer[2]<<endl;
	if(ran[3] == 2) cout<<"#2\t"<<buffer[3]<<endl;
	if(ran[0] == 3) cout<<"#3-4\t"<<buffer[0]<<endl;
	if(ran[1] == 3) cout<<"#3-4\t"<<buffer[1]<<endl;
	if(ran[2] == 3) cout<<"#3-4\t"<<buffer[2]<<endl;
	if(ran[3] == 3) cout<<"#3-4\t"<<buffer[3]<<endl;
	cout<<endl;
}

grid8(int numt)
{
	initwindow(489+160,213+180,windowname);
	setcolor(15);
	setbkcolor(8);
	cleardevice();
	settextjustify(1,2);
	settextstyle(8,0,1);
	//Ñîçäàíèå ñåòêè
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
			ran[i] = 0;
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
			//========================================================
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
			if(cpx > 180 && cpx < 300 && cpy > 220 && cpy < 250 && gt[5] && !gt[3] && !gt[2])
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
			if(cpx > 180 && cpx < 300 && cpy > 250 && cpy < 280 && gt[5] && !gt[3] && !gt[2])
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
			//===============================================================================
			if(cpx > 340 && cpx < 460 && cpy > 140 && cpy < 170 && gt[6] && !gt[5] && !gt[4])
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
			if(cpx > 340 && cpx < 460 && cpy > 170 && cpy < 200 && gt[6] && !gt[5] && !gt[4])
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
	for(int y = 0; y < 4; y++)
	{
		if(ran[y] < 5) ran[y] = 3;
		if(ran[y] == 5 || ran[y] == 6) ran[y] = 2;
		if(ran[y] == 7) ran[y] = 1;
	}
	if(ran[0] == 1) cout<<"#1\t"<<buffer[0]<<endl;
	if(ran[1] == 1) cout<<"#1\t"<<buffer[1]<<endl;
	if(ran[2] == 1) cout<<"#1\t"<<buffer[2]<<endl;
	if(ran[3] == 1) cout<<"#1\t"<<buffer[3]<<endl;
	if(ran[0] == 2) cout<<"#2\t"<<buffer[0]<<endl;
	if(ran[1] == 2) cout<<"#2\t"<<buffer[1]<<endl;
	if(ran[2] == 2) cout<<"#2\t"<<buffer[2]<<endl;
	if(ran[3] == 2) cout<<"#2\t"<<buffer[3]<<endl;
	if(ran[0] == 3) cout<<"#3-4\t"<<buffer[0]<<endl;
	if(ran[1] == 3) cout<<"#3-4\t"<<buffer[1]<<endl;
	if(ran[2] == 3) cout<<"#3-4\t"<<buffer[2]<<endl;
	if(ran[3] == 3) cout<<"#3-4\t"<<buffer[3]<<endl;
	cout<<endl;
}
