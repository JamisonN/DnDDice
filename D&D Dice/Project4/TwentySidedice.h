#pragma once
class TwentySidedice
{
public:
	TwentySidedice() {
		int TwentyDieDiceNum[20] = { 1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
		int TwentyRandIndex = rand() % 20; //generates a random number between 0 and 3
		std::cout << TwentyDieDiceNum[TwentyRandIndex] << std::endl;
		system("Pause");
	}
};

