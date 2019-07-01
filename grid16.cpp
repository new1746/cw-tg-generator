#include <iostream>
#include <cstdlib>
#include <cstring>

typedef char text[11];

using namespace std;

int grid16(int numt, text buffer[])
{
	int teamsN[30] = {0,1,-1,-1,2,3,-1,-1,4,5,-1,-1,6,7,-1,-1,8,9,-1,-1,10,11,-1,-1,12,13,-1,-1,14,15}, winner = -1;
	int key; 
	for(int i =0; i<30; i++)
	{
		if(teamsN[i]!=-1) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
		else
		{
			if(i == 2 || i == 3 || i == 10 || i == 11 || i == 18 || i == 19 || i == 26 || i == 27) cout<<"  \t\t\t??"<<endl;
			if(i == 6 || i == 7 || i == 22 || i == 23) cout<<"  \t\t\t  \t\t\t??"<<endl;
			if(i == 14 || i == 15 ) cout<<"  \t\t\t   \t\t\t  \t\t\t??"<<endl;
		}
	}
    while(winner==-1)
	{
		cin>>key;
		system("clear");
		if((key==2 || key==3) && teamsN[2]!=-1 && teamsN[3]!=-1 && teamsN[6] == -1) teamsN[6] = teamsN[key];
		if((key==10 || key==11) && teamsN[10]!=-1 && teamsN[11]!=-1 && teamsN[7] == -1) teamsN[7] = teamsN[key];
		if((key==6 || key==7) && teamsN[6]!=-1 && teamsN[7]!=-1 && teamsN[14] == -1) teamsN[14] = teamsN[key];
		if((key==0 || key==1) && teamsN[2] == -1) teamsN[2] = teamsN[key];
		if((key==4 || key==5) && teamsN[3] == -1) teamsN[3] = teamsN[key];
		if((key==8 || key==9) && teamsN[10] == -1) teamsN[10] = teamsN[key];
		if((key==12 || key==13) && teamsN[11] == -1) teamsN[11] = teamsN[key];
		if((key==14 || key==15) && teamsN[14]!=-1 && teamsN[15]!=-1) winner = teamsN[key];
		if((key==18 || key==19) && teamsN[18]!=-1 && teamsN[19]!=-1 && teamsN[22] == -1) teamsN[22] = teamsN[key];
		if((key==26 || key==27) && teamsN[26]!=-1 && teamsN[27]!=-1 && teamsN[23] == -1) teamsN[23] = teamsN[key];
		if((key==22 || key==23) && teamsN[22]!=-1 && teamsN[23]!=-1 && teamsN[15] == -1) teamsN[15] = teamsN[key];
		if((key==16 || key==17) && teamsN[18] == -1) teamsN[18] = teamsN[key];
		if((key==20 || key==21) && teamsN[19] == -1) teamsN[19] = teamsN[key];
		if((key==24 || key==25) && teamsN[26] == -1) teamsN[26] = teamsN[key];
		if((key==28 || key==29) && teamsN[27] == -1) teamsN[27] = teamsN[key];
		for(int i =0; i<30; i++)
		{
			if(teamsN[i]!=-1)
			{
				if(i == 2 || i == 3 || i == 10 || i == 11 || i == 18 || i == 19 || i == 26 || i == 27) cout<<"  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;;
				if(i == 6 || i == 7 || i == 22 || i == 23) cout<<"  \t\t\t  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;
				if(i == 14 || i == 15 ) cout<<"  \t\t\t   \t\t\t  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;
				if(i != 2 && i != 3 && i != 10 && i != 11 && i != 18 && i != 19 && i != 26 && i != 27 && i != 6 && i != 7 && i != 22 && i != 23 && i != 14 && i != 15) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
			}
			else
			{
				if(i == 2 || i == 3 || i == 10 || i == 11 || i == 18 || i == 19 || i == 26 || i == 27) cout<<"  \t\t\t??"<<endl;
				if(i == 6 || i == 7 || i == 22 || i == 23) cout<<"  \t\t\t  \t\t\t??"<<endl;
				if(i == 14 || i == 15 ) cout<<"  \t\t\t   \t\t\t  \t\t\t??"<<endl;
			}
		}
	}
	cout<<endl<<"Winner: "<<buffer[winner]<<endl;
	return 0;
}
