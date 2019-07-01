#include <iostream>
#include <cstdlib>
#include <cstring>
typedef char text[11];
using namespace std;

int grid4(int numt, text buffer[])
{
	int teamsN[6] = {0,1,-1,-1,2,3}, winner = -1;
	int key; 
	for(int i =0; i<6; i++)
	{
		if(teamsN[i]!=-1) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
		else cout<<"  \t\t\t??"<<endl;
	}
    while(winner==-1)
	{
		cin>>key;
		system("clear");
		if((key==2 || key==3) && teamsN[2]!=-1 && teamsN[3]!=-1) winner = teamsN[key];
		if((key==0 || key==1) && teamsN[2] == -1) teamsN[2] = teamsN[key];
		if((key==4 || key==5) && teamsN[3] == -1) teamsN[3] = teamsN[key];
		for(int i =0; i<6; i++)
		{
			if(teamsN[i]!=-1) 
				if(i == 2 || i == 3) cout<<"  \t\t\t"<<i<<")"<<buffer[teamsN[i]]<<endl; 
				else cout<<i<<") "<<buffer[teamsN[i]]<<endl;
			else cout<<"  \t\t\t??"<<endl;
		}
	}
	cout<<endl<<"winner: "<<buffer[winner]<<endl;
	return 0;
}
