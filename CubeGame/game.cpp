#include "game.h"
#include <iostream>
using namespace std;
int FirstTurn()
{
	int choice;
	cout << "Who goes first? (1) Computer (2) Human: ";
	cin >> choice;
	return choice;
}
int rollDice()
{
	return rand() % 6 + 1;
}

void displayDice(int dice)
{
	cout << "You rolled a " << dice << endl;
}

void playGame(int firstTurn)
{
	int humanTotal = 0, computerTotal = 0;
	int turns = 10;
	for (int i = 1; i <= turns; i++)
	{
		if ((firstTurn == 1 && i % 2 == 1) || (firstTurn == 2 && i % 2 == 0))
		{
			cout << "Human's turn (turn " << i << ")" << endl;
			int humanDice = rollDice();
			displayDice(humanDice);
			humanTotal += humanDice;
		}
		else
		{
			cout << "Computer's turn (turn " << i << ")" << endl;
			int computerDice = rollDice();
			displayDice(computerDice);
			computerTotal += computerDice;
		}
	}
	cout << "Human's total: " << humanTotal << endl;
	cout << "Computer's total: " << computerTotal << endl;
	if (humanTotal > computerTotal)
	{
		cout << "Human wins!" << endl;
	}
	else if (computerTotal > humanTotal)
	{
		cout << "Computer wins!" << endl;
	}
	else
	{
		cout << "It's a tie!" << endl;
	}
	cout << "Average human roll: " << humanTotal / turns << endl;
	cout << "Average computer roll: " << computerTotal / turns << endl;
}
