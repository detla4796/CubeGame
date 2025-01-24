#include <iostream>
#include "game.h"
using namespace std;
int main()
{
	srand(time(0));
	int firstTurn = FirstTurn();
	playGame(firstTurn);
	return 0;
}

