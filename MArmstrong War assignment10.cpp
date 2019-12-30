#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void shuffle(int array[], int siz);

int main()
{
	int player1[26];
	int player2[26];
	int temp1 = 0;
	int player1won = 0;
	int player2won = 0;
	int deck1[26] = {2,3,4,5,6,7,8,9,10,11,12,13,14, 2,3,4,5,6,7,8,9,10,11,12,13,14};
	int deck2[26]{2,3,4,5,6,7,8,9,10,11,12,13,14, 2,3,4,5,6,7,8,9,10,11,12,13,14};



	cout << "Welcome to War! the card game in c++ \n";
	cout << "------------------------------------ \n \n \n";

	cout << "you are now: Player 1 \n" << "your opponent will be: Player 2" << endl << endl << endl;

	cout << "Player1	Player2		Winner \n";
	cout << "_____________________________ \n";

	shuffle(deck1, 26);
	shuffle(deck2, 26);

	
	for (int y = 0; y < 26 ; y++)
	{
		player2[y] = deck2[y];
	}


	for (int t = 0; t < 26; t++)
	{
		player1[t] = deck1[t];
	}


	for (int i = 0; i < 26; i++)
	{

		cout << player1[i] << "		";

		cout << player2[i] << "		";
		

		if (player1[i] < player2[i])
		{
			cout << "Player2 \n";
			player2won += 1;
		}

		else if (player1[i] > player2[i])
		{
			cout << "Player1 \n";
			player1won += 1;
		}
		else
			cout << "Tie \n";

	}

	if (player1won > player2won)
		cout << "WINNER: Player 1! Congrats!";

	else if (player1won < player2won)
		cout << "WINNER: Player 2";

	else
		cout << "Winner: Tie?";

	cout << endl << endl;


	system("pause");
	return 0;
}



void shuffle(int array[], int siz)
{
	int temp = 0;
	int random = 0;
	


	for (int i = 0; i < siz; i++)
	{
		random = rand() % 14 + 2;

		temp = array[i];
		array[i] = array[random];
		array[random] = temp;

	}
}