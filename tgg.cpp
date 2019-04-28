#include <iostream>
#include <graphics.h>
#include <ctime>
#include <windows.h>


const short int ttl = 10;
const char windowname[] = "Tournament grid generator";

typedef char text[ttl+1];

text buffer[32];
int placegrid[32];

int grid4(int);


using namespace std;

main()
{
	setlocale(LC_ALL, "Russian");
	system("color 80");
	srand(time(0));
	char inputtn[100];
	int numbert;
	string check;
	cout<<"Введите количество команд равное 4/8/16/32."<<endl;
	cin>>numbert;
	while(numbert!=4 && numbert!=8 && numbert!=16 && numbert!=32)
	{
		numbert = 0;
		cout<<"Код ошибки: 1. Количество команд должно быть равно 4/8/16/32."<<endl;
		cin>>numbert;
	}
	for(int i=0; i<numbert; i++)
	{
		cout<<"Введите название "<<i+1<<" команды на английском языке:"<<endl;
		cin>>inputtn;
		while(strlen(inputtn)>ttl)
		{
			strcpy(inputtn,"");
			cout<<inputtn<<endl;
			cout<<"Код ошибки: 2. Количество символов в названии не должно превышать "<<ttl<<"."<<endl;
			cin>>inputtn;
		}
		strcpy(buffer[i], inputtn);
	}
	switch(numbert)
	{
		case 4: 
		{
			grid4(numbert);
			break;
		}
		case 8:
		{
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
	initwindow(469,213,windowname);
	setcolor(15);
	setbkcolor(8);
	cleardevice();
	settextjustify(1,2);
	settextstyle(8,0,1);
	//Создание сетки
	rectangle(20,20,140,80);
	moveto(20,50);
	lineto(160,50);
	rectangle(20,120,140,180);
	moveto(20,150);
	lineto(160,150);
	lineto(160,49);
	moveto(160,100);
	lineto(320,100);
	rectangle(180,70,300,130);
	rectangle(320,85,440,115);
	short int ran[4] = {0,0,0,0}; char i,t=0;
	while(!ran[0] + !ran[1] + !ran[2] + !ran[3])
	{
		i = rand()%4;
		if(!ran[i])
		{
			if(t<2) outtextxy(80,20+6+(30*t),buffer[i]);
			if(t>1) outtextxy(80,60+6+(30*t),buffer[i]);
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
						outtextxy(240,70+6,buffer[u]);
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
						outtextxy(240,70+6,buffer[u]);
						bar(21,51,140,80);
						setbkcolor(2);
						outtextxy(80,50+6,buffer[u]);
						ran[u] = 5;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 120 && cpy < 150 && gt[1])
			{
				gt[1] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==3)
					{
						setbkcolor(8);
						outtextxy(240,100+6,buffer[u]);
						bar(21,121,140,150);
						setbkcolor(2);
						outtextxy(80,120+6,buffer[u]);
						ran[u] = 6;
						break;
					}
				}
			}
			if(cpx > 20 && cpx < 140 && cpy > 150 && cpy < 180 && gt[1])
			{
				gt[1] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==4)
					{
						setbkcolor(8);
						outtextxy(240,100+6,buffer[u]);
						bar(21,151,140,180);
						setbkcolor(2);
						outtextxy(80,150+6,buffer[u]);
						ran[u] = 6;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 70 && cpy < 100 && gt[2])
			{
				gt[2] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==5)
					{
						setbkcolor(8);
						outtextxy(380,85+6,buffer[u]);
						bar(181,71,300,100);
						setbkcolor(2);
						outtextxy(240,70+6,buffer[u]);
						ran[u] = 7;
						tf = 1;
						break;
					}
				}
			}
			if(cpx > 180 && cpx < 300 && cpy > 100 && cpy < 130 && gt[2])
			{
				gt[2] = 0;
				for(int u = 0; u < 4; u++)
				{
					if(ran[u]==6)
					{
						setbkcolor(8);
						outtextxy(380,85+6,buffer[u]);
						bar(181,101,300,130);
						setbkcolor(2);
						outtextxy(240,100+6,buffer[u]);
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
	char temp[] = "Press any key";
	settextjustify(2,0);
	setbkcolor(8);
	setcolor(15);
	outtextxy(455,197,temp);
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
