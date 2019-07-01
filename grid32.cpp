#include <iostream>
#include <cstdlib>
#include <cstring>

typedef char text[11];

using namespace std;

int grid32(int numt, text buffer[])
{
	int teamsN[62] = {0,1,-1,-1,2,3,-1,-1,4,5,-1,-1,6,7,-1,-1,8,9,-1,-1,10,11,-1,-1,12,13,-1,-1,14,15,-1,-1,16,17,-1,-1,18,19,-1,-1,20,21,-1,-1,22,23,-1,-1,24,25,-1,-1,26,27,-1,-1,28,29,-1,-1,30,31}, winner = -1;
	int key; 
	for(int i =0; i<62; i++)
	{
		if(teamsN[i]!=-1) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
		else
		{
			if(i == 2 || i == 3 || i == 10 || i == 11 || i == 18 || i == 19 || i == 26 || i == 27 || i == 34 || i == 35 || i == 42 || i == 43 || i == 50 || i == 51 || i == 58 || i == 59) cout<<"  \t\t\t??"<<endl;
			if(i == 6 || i == 7 || i == 22 || i == 23 || i == 38 || i == 39 || i == 54 || i == 55) cout<<"  \t\t\t  \t\t\t??"<<endl;
			if(i == 14 || i == 15  || i == 46 || i == 47) cout<<"  \t\t\t   \t\t\t  \t\t\t??"<<endl;
			if(i == 30 || i == 31) cout<<"  \t\t\t   \t\t\t  \t\t\t  \t\t\t??"<<endl;
		}
	}
    while(winner==-1)
	{
		cin>>key;
		system("clear");
		if((key==30 || key==31) && teamsN[30]!=-1 && teamsN[31]!=-1) winner = teamsN[key];
		if((key==2 || key==3) && teamsN[2]!=-1 && teamsN[3]!=-1 && teamsN[6] == -1) teamsN[6] = teamsN[key];
		if((key==10 || key==11) && teamsN[10]!=-1 && teamsN[11]!=-1 && teamsN[7] == -1) teamsN[7] = teamsN[key];
		if((key==6 || key==7) && teamsN[6]!=-1 && teamsN[7]!=-1 && teamsN[14] == -1) teamsN[14] = teamsN[key];
		if((key==46 || key==47) && teamsN[46]!=-1 && teamsN[47]!=-1 && teamsN[31] == -1) teamsN[31] = teamsN[key];
		if((key==14 || key==15) && teamsN[14]!=-1 && teamsN[15]!=-1 && teamsN[30] == -1) teamsN[30] = teamsN[key];
		if((key==18 || key==19) && teamsN[18]!=-1 && teamsN[19]!=-1 && teamsN[22] == -1) teamsN[22] = teamsN[key];
		if((key==26 || key==27) && teamsN[26]!=-1 && teamsN[27]!=-1 && teamsN[23] == -1) teamsN[23] = teamsN[key];
		if((key==22 || key==23) && teamsN[22]!=-1 && teamsN[23]!=-1 && teamsN[15] == -1) teamsN[15] = teamsN[key];
		if((key==38 || key==39) && teamsN[38]!=-1 && teamsN[39]!=-1 && teamsN[46] == -1) teamsN[46] = teamsN[key];
		if((key==54 || key==55) && teamsN[54]!=-1 && teamsN[55]!=-1 && teamsN[47] == -1) teamsN[47] = teamsN[key];
		if((key==34 || key==35) && teamsN[34]!=-1 && teamsN[35]!=-1 && teamsN[38] == -1) teamsN[38] = teamsN[key];
		if((key==42 || key==43) && teamsN[42]!=-1 && teamsN[43]!=-1 && teamsN[39] == -1) teamsN[39] = teamsN[key];
		if((key==50 || key==51) && teamsN[50]!=-1 && teamsN[51]!=-1 && teamsN[54] == -1) teamsN[54] = teamsN[key];
		if((key==58 || key==59) && teamsN[58]!=-1 && teamsN[59]!=-1 && teamsN[55] == -1) teamsN[55] = teamsN[key];
		if((key==0 || key==1) && teamsN[2] == -1) teamsN[2] = teamsN[key];
		if((key==4 || key==5) && teamsN[3] == -1) teamsN[3] = teamsN[key];
		if((key==8 || key==9) && teamsN[10] == -1) teamsN[10] = teamsN[key];
		if((key==12 || key==13) && teamsN[11] == -1) teamsN[11] = teamsN[key];
		if((key==16 || key==17) && teamsN[18] == -1) teamsN[18] = teamsN[key];
		if((key==20 || key==21) && teamsN[19] == -1) teamsN[19] = teamsN[key];
		if((key==24 || key==25) && teamsN[26] == -1) teamsN[26] = teamsN[key];
		if((key==28 || key==29) && teamsN[27] == -1) teamsN[27] = teamsN[key];
		if((key==32 || key==33) && teamsN[34] == -1) teamsN[34] = teamsN[key];
		if((key==36 || key==37) && teamsN[35] == -1) teamsN[35] = teamsN[key];
		if((key==40 || key==41) && teamsN[42] == -1) teamsN[42] = teamsN[key];
		if((key==44 || key==45) && teamsN[43] == -1) teamsN[43] = teamsN[key];
		if((key==48 || key==49) && teamsN[50] == -1) teamsN[50] = teamsN[key];
		if((key==52 || key==53) && teamsN[51] == -1) teamsN[51] = teamsN[key];
		if((key==56 || key==57) && teamsN[58] == -1) teamsN[58] = teamsN[key];
		if((key==60 || key==61) && teamsN[59] == -1) teamsN[59] = teamsN[key];
		for(int i =0; i<62; i++)
		{
			if(teamsN[i]!=-1)
			{
				if(i == 2 || i == 3 || i == 10 || i == 11 || i == 18 || i == 19 || i == 26 || i == 27 || i == 34 || i == 35 || i == 42 || i == 43 || i == 50 || i == 51 || i == 58 || i == 59) cout<<"  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;
				if(i == 6 || i == 7 || i == 22 || i == 23 || i == 38 || i == 39 || i == 54 || i == 55) cout<<"  \t\t\t  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;
				if(i == 14 || i == 15  || i == 46 || i == 47) cout<<"  \t\t\t   \t\t\t  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;
				if(i == 30 || i == 31) cout<<"  \t\t\t   \t\t\t  \t\t\t  \t\t\t"<<i<<") "<<buffer[teamsN[i]]<<endl;
				if(i != 2 && i != 3 && i != 10 && i != 11 && i != 18 && i != 19 && i != 26 && i != 27 && i != 34 && i != 35 && i != 42 && i != 43 && i != 50 && i != 51 && i != 58 && i != 59 && i != 6 && i != 7 && i != 22 && i != 23 && i != 38 && i != 39 && i != 54 && i != 55 && i != 14 && i != 15 && i != 46  && i != 47 && i != 30  && i != 31) cout<<i<<") "<<buffer[teamsN[i]]<<endl;
			}
			else
			{
				if(i == 2 || i == 3 || i == 10 || i == 11 || i == 18 || i == 19 || i == 26 || i == 27 || i == 34 || i == 35 || i == 42 || i == 43 || i == 50 || i == 51 || i == 58 || i == 59) cout<<"  \t\t\t??"<<endl;
				if(i == 6 || i == 7 || i == 22 || i == 23 || i == 38 || i == 39 || i == 54 || i == 55) cout<<"  \t\t\t  \t\t\t??"<<endl;
				if(i == 14 || i == 15  || i == 46 || i == 47) cout<<"  \t\t\t   \t\t\t  \t\t\t??"<<endl;
				if(i == 30 || i == 31) cout<<"  \t\t\t   \t\t\t  \t\t\t  \t\t\t??"<<endl;
			}
		}
	}
	cout<<endl<<"Winner: "<<buffer[winner]<<endl;
	return 0;
}
