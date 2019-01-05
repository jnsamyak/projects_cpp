#include<iostream>
#include"winning_chance.cpp"
using namespace std;
void board()
{
        cout<<"PERSON 1- 'X' "<<endl;
        cout<<"PERSON 2- 'O' \n "<<endl;
         //trying to visulaize board and assigning each value to each space                                                                        
        //1 tab or three space gap                                        
	cout << "	|	|	" << endl;
	cout << col[1] << "	|" << col[2] << "	|	" << col[3] << endl;
	cout << "________|_______|_________" << endl;
	cout << "        |       |         " << endl;
	cout << col[4] << "	|" << col[5] << "	|	" << col[6] << endl;
	cout << "________|_______|_________" << endl;
	cout << "        |       |         " << endl;
	cout << col[7] << "	|" << col[8] << "	|	" << col[9] << endl;
	cout << "	|	|	" << endl << endl;
}

int main()
{
char tick;
int Person = 1,i,entry;
	cout<<"\n\n WELCOME TO SAM'S TIC TAC TOE GAME\n\n";
	do
	{
		board();
		Person=(Person%2)?1:2;

		cout << "Personn  " << Person << " :P :- Where you want to insert your probability to win ?  ";
  	cin >> entry;
	tick=(Person == 1) ? 'X' : 'O';

	if (entry == 1 && col[1] == '1')
			col[1] = tick;
	else if (entry == 2 && col[2] == '2')
			col[2] = tick;
	else if (entry == 3 && col[3] == '3')
			col[3] = tick;
	else if (entry == 4 && col[4] == '4')
			col[4] = tick;
	else if (entry == 5 && col[5] == '5'	)
			col[5] = tick;
	else if (entry == 6 && col[6] == '6')
			col[6] = tick;
	else if (entry == 7 && col[7] == '7')
			col[7] = tick;
	else if (entry == 8 && col[8] == '8')

			col[8] = tick;
	else if (entry == 9 && col[9] == '9')

			col[9] = tick;
	else
		{
			cout<<"NOT A CORRECT ENTRY";
			Person--;
		}
		i=win();
		Person++;
		}
		while(i==1);
		         board();
		if(i==100)
		       {	  
			cout<<"\a\n\nWE HAVE THE WINNER OF THE GAME AND THAT IS Person "<<--Person<<" win ";
			}
		else
			{
			cout<<"GAME HAS BEEN DRAWN, TRY AGAIN :p !! ";
			}

	return 10;
}
