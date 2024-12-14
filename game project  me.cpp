#include<iostream>
using namespace std;
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
string p1,p2;
char turn = 'x';
int r,c;
bool draw =false;
void board()
{
	cout<<"\tplayer 1 is  = "<<p1;
	cout<<"\n\n\tplayer 2 is  = "<<p2;
	cout<<"\n\n\n\t\tgame board \n\n";
	cout<<"\t\t   |      |   \n";
	cout<<"\t\t"<<a[0][0]<<"  |   "<<a[0][1]<<"  |  "<<a[0][2]<<"\n";
	cout<<"\t\t   |      |   \n";
	cout<<"\t\t--------------\n";
	cout<<"\t\t   |      |   \n";
	cout<<"\t\t"<<a[1][0]<<"  |   "<<a[1][1]<<"  |  "<<a[1][2]<<"\n";
	cout<<"\t\t   |      |   \n";
	cout<<"\t\t---------------\n";
	cout<<"\t\t   |      |   \n";
	cout<<"\t\t"<<a[2][0]<<"  |   "<<a[2][1]<<"  |  "<<a[2][2]<<"\n";
	cout<<"\t\t   |      |   \n";
	cout<<"\t\t---------------\n";
}

void input()
{
	if(turn=='x')
	cout<<"\nplayer 1 [x] enter a number = ";
	else
	if(turn=='O')
	cout<<"\nplayer 2 [O] enter a number = ";
	cin>>choice;
	
switch(choice)
{
case 1:r=0;c=0;break;
case 2:r=0;c=1;break;
case 3:r=0;c=2;break;
case 4:r=1;c=0;break;
case 5:r=1;c=1;break;	
case 6:r=1;c=2;break;	
case 7:r=2;c=0;break;	
case 8:r=2;c=1;break;
case 9:r=2;c=2;break;
default:
	cout<<"\nInvalid\n";
	}	
	
	if(turn=='x'&&a[r][c]!='x'&&a[r][c]!='O')
	{
		a[r][c]='x';
		turn='O';
	}
	else
	if(turn=='O'&&a[r][c]!='x'&&a[r][c]!='O')
	{
		a[r][c]='O';
		turn='x';
	}
	else
	{
		cout<<"\nbox is alread fill \n";
		input();
	}
	board();
	
	
}

bool gameover()
{
	for(int i=0;i<3;i++)
	{
		if(a[i][0]==a[i][1]&&a[i][0]==a[i][2] || a[0][i]==a[1][i]&&a[0][i]==a[2][i])
        return false;
	}	
		if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]||a[0][2]==a[1][1]&&a[0][2]==a[2][0])	
	
	    return false;
	    for(int i=0;i,3;i++)
	    for(int j=0;j<3;j++)
	    {
	    	system("cls");
	    	if(a[i][j]!='x'&&a[i][j]!='O')
	    	return true;
		}
		draw=true;
		return false;
}




int main()
{
	cout<<"enter a name of player 1 = ";
	cin>>p1;
	cout<<"enter a nume of player 2 = ";
	cin>>p2;
	while(gameover())
	{
	board();
	input();
	gameover();
}
if(turn=='x'&&draw==false)
cout<<"\nplayer 2 [O]  "<<p2<<"  win the mach \n";
else
if(turn=='O'&&draw==false)
cout<<"\nplayer 1 [x]  "<<p1<<"  win the mach\n";
else
{
	cout<<"\nmach draw \n";
}}
