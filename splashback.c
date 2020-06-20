#include <stdio.h>



int main(int argc, char * argv[])
{
	int runmode = 0;				//0 for user play, 1 for ai play, 2 for ai training

	//arguments
	if(argc > 1)
	{
		if(argv[2] == "-h")
		{
			printf("splashback [-h | -ai | -train]\n");
			printf("-h    help\n-ai    let AI play\n-train    train the AI\n");
			return 0;
		}
		else if(argv[2] == "-ai")
		{
			runmode = 1;
		}
		else if(argv[2] == "-train")
		{
			RUNMODE = 2;
		}
	}



}

int printBoard(int ** board)	// . * o 0
{
	/*
	-----------------------------   29
	|							|	7 tab
	|	.	.	.	.	.	.	|	7tab
	|							|
	|	.	*	0	o	*	0	|
	|							|
	-----------------------------
	*/

	printf("-----------------------------\n");
	printf("|\t\t\t\t\t\t\t|\n");
	for(int i = 0; i < 6; i ++)
	{
		printf("|\t");
		for(int j = 0; j < 6; j ++)
		{
			if(board[i][j] == 0)		printf(" \t");
			else if(board[i][j] == 1)	printf(".\t");
			else if(board[i][j] == 2)	printf("*\t");
			else if(board[i][j] == 3)	printf("o\t");
			else if(board[i][j] == 4)	printf("0\t");
			else						return 1;	// err: unexpected value
		}
		printf("|\n|\t\t\t\t\t\t\t|\n");
	}
	printf("-----------------------------\n");

	return 0;
}
