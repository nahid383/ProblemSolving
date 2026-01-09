#include<stdio.h>
#include<string.h>
int main()
{
	char game[10];
	scanf("%s",game);
	int count_X=0;
	int countZero=0;
	int flag = 0;
	for(int i=0; i<strlen(game); i++)
	{
		if(game[i]=='X')
		count_X++;
		else if(game[i]=='0')
		countZero++;
	}
	if(strlen(game)>9)
	{
		printf("illigal\n");
		return 0;
	}
	if(count_X==countZero)
	{
		printf("first\n");
		return 0;
	}
	if(count_X-1==countZero)
	{
		printf("second\n");
		return 0;
	}
	if(count_X>countZero+1 || countZero>count_X)
	{
		printf("illigal\n");
		return 0;
	}

	if(game[0]=='X' && game[1]=='X' && game[2]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[0]=='X' && game[3]=='X' && game[6]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[0]=='X' && game[4]=='X' && game[8]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[3]=='X' && game[4]=='X' && game[5]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[1]=='X' && game[4]=='X' && game[7]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[2]=='X' && game[5]=='X' && game[8]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[6]=='X' && game[7]=='X' && game[8]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}
	if(game[3]=='X' && game[4]=='X' && game[6]=='X')
	{
		printf("the first player won\n");
		flag = 1;
		return 0;
	}


	if(game[0]=='0' && game[1]=='0' && game[2]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[0]=='0' && game[3]=='0' && game[6]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[0]=='0' && game[4]=='0' && game[8]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[3]=='0' && game[4]=='0' && game[5]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[1]=='0' && game[4]=='0' && game[7]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[2]=='0' && game[5]=='0' && game[8]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[6]=='0' && game[7]=='0' && game[8]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}
	if(game[3]=='0' && game[4]=='0' && game[6]=='0')
	{
		printf("the second player won\n");
		flag = 1;
		return 0;
	}

	if(flag==0)
	{
		printf("draw\n");
		return 0;
	}

	
}