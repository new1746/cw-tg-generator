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
	int numbert = 8;
	string check;
	cout<<"������� ���������� ������ ������ 4/8/16/32."<<endl;
	cin>>numbert;
	while(numbert!=4 && numbert!=8 && numbert!=16 && numbert!=32)
	{
		numbert = 0;
		cout<<"��� ������: 1. ���������� ������ ������ ���� ����� 4/8/16/32."<<endl;
		cin>>numbert;
	}
	for(int i=0; i<numbert; i++)
	{
		cout<<"������� �������� ������� "<<i+1<<" �� ���������� �����:"<<endl;
		cin>>inputtn;
		while(strlen(inputtn)>ttl)
		{
			strcpy(inputtn,"");
			cout<<inputtn<<endl;
			cout<<"��� ������: 2. ���������� �������� �� ������ ��������� "<<ttl<<"."<<endl;
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
	return 0;
}
