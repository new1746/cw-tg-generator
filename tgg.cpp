#include <iostream>
#include <graphics.h>
#include <string>

/*	Количество вариантов ошибок: 2
	1 - Количество команд не является допустимым
	2 - Превышено количество символов в названии команды
	3 - 
*/
//===============[Константы]===============
const short int ttl = 12;//Количество символов в названии команды

//===============[typedef]===============
typedef char text[ttl+1];//Переменная для массива названий команд

//===============[Глобальные переменные]===============
text buffer[32];//Максимальное количесво команд (массив названий)
int placegrid[32];//Максимальное количесво команд (массив занятых мест)

int grid4(short int);


using namespace std;

main()
{ 
	setlocale(LC_ALL, "Russian");//Русский язык
	char inputtn[100];
	int numbert;
	string check;
	cout<<" Введите количество команд равное 4/8/16/32."<<endl<<">> ";
	cin>>numbert;
	while(numbert!=4 && numbert!=8 && numbert!=16 && numbert!=32)
	{
		cout<<" Код ошибки: 1. Количество команд должно быть равно 4/8/16/32."<<endl<<">> ";
		cin>>numbert;
	}
	for(int i=0; i<numbert; i++)
	{
		cout<<" Введите названия команды "<<i+1<<":"<<endl;
		cout<<">> ";
		cin>>inputtn;
		while(strlen(inputtn)>ttl)
		{
			strcpy(inputtn,"");
			cout<<inputtn<<endl;
			cout<<" Код ошибки: 2. Количество символов не должно превышать "<<ttl<<"."<<endl<<">> ";
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
//	Вывод мест команд
	
//	initwindow(1300,700); 
//	for(int i=0; i<numbert; i++)
//	outtextxy(10,20*i + 10,buffer[i]);
//	getch();             
//	closegraph();
      
	return 0;
}

grid4(short int numteam)
{
	
}
