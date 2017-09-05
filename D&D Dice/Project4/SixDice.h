#pragma once
class SixDice
{
public:
	SixDice() {
		int SixDiceNum[6] = { 1,2, 3, 4,5,6 };
		int SixSideRandIndex = rand() % 6; //generates a random number between 0 and 3
		std::cout << SixDiceNum[SixSideRandIndex] << std::endl;
		system("Pause");
	}
};

