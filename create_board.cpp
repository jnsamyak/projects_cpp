#include<iostream>
using namespace std;
char col[10]={'0','1','2','3','4','5','6','7','8','9'};
void board()
{	
//	clrscr();
	cout<<"\n\n WELCOME TO TIC TAC TOE GAME \n\n";
	cout<<"PERSON 1- 'X' "<<endl;
	cout<<"PERSON 2- 'O' \n "<<endl;
	cout<<" 		|	      	  |	"<<endl;
                               
	//trying to visulaize board and assigning each value to each space
	//1 tab or three space gap
	cout<<col[1]<<"		|	" << col[2] <<"  	  |	" << col[3]<<endl;
	cout<<"________________"<< "|"<<"_________________"<<"|"<<"_______________"<<endl;
	cout<<"                "<< "|"<<"                 "<<"|"<<"               "<<endl;
	cout<<col[3]<<"		|	" << col[4] <<"  	  |	" << col[5]<<endl;
	cout<<"________________"<< "|"<<"_________________"<<"|"<<"_______________"<<endl;
	cout<<"                "<< "|"<<"                 "<<"|"<<"               "<<endl;
	cout<<col[7]<<"		|	" << col[8] <<"  	  |	" << col[9]<<endl;
	
}
/*
int main()
{board();
return 0;}
used for checking */
