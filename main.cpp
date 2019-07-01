#include <iostream>
#include <cstdlib>
#include <cstring>
#include "func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	char inputtn[100];
	int numbert = 32;
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
		cout<<"Введите названия команды "<<i+1<<" на английском языке:"<<endl;
		cin>>inputtn;
		while(strlen(inputtn)>ttl)
		{
			strcpy(inputtn,"");
			cout<<inputtn<<endl;
			cout<<"Код ошибки: 2. Количество символов в названии команды не должно превышать "<<ttl<<"."<<endl;
			cin>>inputtn;
		}
		strcpy(buffer[i], inputtn);
	}
	switch(numbert)
	{
		case 4: 
		{
			grid4(numbert, buffer);
			break;
		}
		case 8:
		{
			grid8(numbert, buffer);
			break;
		}
		case 16:
		{
			//grid16(numbert);
			break;
		}
		case 32:
		{
			//grid32(numbert);
			break;
		}
	}
	return 0;
}
