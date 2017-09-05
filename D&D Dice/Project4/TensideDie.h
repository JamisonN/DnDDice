#pragma once
class TensideDie
{
public:
	TensideDie() {
		int TensideDieDiceNum[10] = {1, 2, 3, 4,5,6,7,8,9,10};
		int TensideRandIndex = rand() % 10; //generates a random number between 0 and 3
		std::cout << TensideDieDiceNum[TensideRandIndex] << std::endl;
		system("Pause");
	}
};

