#include <iostream>
#include <cstdlib>
#include <cstring>

typedef char text[11];

using namespace std;

int grid8(int numt, text buffer[])
{
	int teamsN[14] = {0,1,-1,-1,2,3,-1,-1,4,5,-1,-1,6,7}, winner = -1;
	int key; 
	for(int i =0; i<14; i++)
	{
		if(teamsN[i]!=-1) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
		else
		{
			if(i == 2 || i == 3 || i == 10 || i == 11) cout<<"  \t\t\t??"<<endl;
			if(i == 6 || i == 7) cout<<"  \t\t\t  \t\t\t??"<<endl; 
			if(i != 2 && i != 3 && i != 10 && i != 11 && i != 6 && i != 7) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
		}
	}
    while(winner==-1)
	{
		cin>>key;
		system("clear");
		if((key==2 || key==3) && teamsN[2]!=-1 && teamsN[3]!=-1 && teamsN[6] == -1) teamsN[6] = teamsN[key];
		if((key==10 || key==11) && teamsN[10]!=-1 && teamsN[11]!=-1 && teamsN[7] == -1) teamsN[7] = teamsN[key];
		if((key==6 || key==7) && teamsN[6]!=-1 && teamsN[7]!=-1) winner = teamsN[key];
		if((key==0 || key==1) && teamsN[2] == -1) teamsN[2] = teamsN[key];
		if((key==4 || key==5) && teamsN[3] == -1) teamsN[3] = teamsN[key];
		if((key==8 || key==9) && teamsN[10] == -1) teamsN[10] = teamsN[key];
		if((key==12 || key==13) && teamsN[11] == -1) teamsN[11] = teamsN[key];
		for(int i =0; i<14; i++)
		{
			if(teamsN[i]!=-1)
			{
				if(i == 2 || i == 3 || i == 10 || i == 11) cout<<"  \t\t\t"<<i<<")"<<buffer[teamsN[i]]<<endl;
				if(i == 6 || i == 7) cout<<"  \t\t\t  \t\t\t"<<i<<")"<<buffer[teamsN[i]]<<endl; 
				if(i != 2 && i != 3 && i != 10 && i != 11 && i != 6 && i != 7) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
			}
			else
			{
				if(i == 2 || i == 3 || i == 10 || i == 11) cout<<"  \t\t\t??"<<endl;
				if(i == 6 || i == 7) cout<<"  \t\t\t  \t\t\t??"<<endl; 
				if(i != 2 && i != 3 && i != 10 && i != 11 && i != 6 && i != 7) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
			}
		}
	}
	cout<<endl<<"Winner: "<<buffer[winner]<<endl;
	return 0;
}
