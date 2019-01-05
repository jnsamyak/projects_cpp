#include<iostream>
#include"create_board.cpp"
using namespace std;
int win()
{	/* game status 
		return 100 :for game over with conclusion
		return 10:for game over no conclusion
		return 1 :for game is in progress
	*/
	//1,2,3 - 1,5,9 - 1,,4,7 - 2,5,8 - 3,6,9 -3,5,7 -4,5,6 -7,8,9 chances to win 
	if (col[1] == col[2] && col[2] == col[3])
		return 100;
	else if (col[1] ==  col[5] &&col[5] == col[9])
		return 100;
	else if (col[1] == col[4] &&  col[4] == col[7])
		return 100;
	else if (col[2] == col[5] && col[5] == col[8])
		return 100;
	else if (col[3] ==   col[6] && col[6] == col[9])
		return 100;
	else if (col[3] == col[5] && col[5] == col[7])
		return 100;
	else if (col[4] == col[5] && col[5] == col[6])
		return 100;
	else if (col[7] ==    col[8] && col[8] == col[9])
		return 100;
	else if (col[1] != '1' && col[2] != '2' && col[3] != '3' 
                    && col[4] != '4' && col[5] != '5' && col[6] != '6' 
                  && col[7] != '7' && col[8] != '8' && col[9] != '9')
		return 10;
	else
		return 1;
}
/*
int main()
{ board();
 
int x= win();
return 1;
}
*/
