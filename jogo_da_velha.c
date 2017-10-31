#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char square[9] = {'1','2','3','4','5','6','7','8','9'};

int checkwin(){
	if (square[0] == square[1] && square[1] == square[2])
		return 1;
	else if (square[3] == square[4] && square[4] == square[5])
		return 1;
	else if (square[6] == square[7] && square[7] == square[8])
		return 1;
	else if (square[0] == square[3] && square[3] == square[6])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[0] == square[4] && square[4] == square[8])
		return 1;
	else if (square[2] == square[4] && square[4] == square[6])
		return 1;
	else if (square[0] != '1' && square[1] != '2' && square[2] != '3' && square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6] != '7' && square[7] != '8' && square[8] != '9')
		return 0;
	else
		return -1;
}

int main(){
	int player = 0, i = 0, choice = 0, l = 0,  c = 0;
	char mark;
	do{
		player = (player%2);
		scanf("%d %d", &l, &c);
		choice = (l * 3) + c;
		mark = (player == 0) ? 'X' : 'O';
		if (choice == 0)
			square[0] = mark;
		else if (choice == 1)
			square[1] = mark;
		else if (choice == 2)
			square[2] = mark;
		else if (choice == 3)
			square[3] = mark;
		else if (choice == 4)
			square[4] = mark;
		else if (choice == 5)
			square[5] = mark;
		else if (choice == 6)
			square[6] = mark;
		else if (choice == 7)
			square[7] = mark;
		else if (choice == 8)
			square[8] = mark;
		i = checkwin();
		player++;
	}while(i == -1);
	if(i == 1)
		printf("%d", --player);
	else
		printf("empate");
	return 0;
}