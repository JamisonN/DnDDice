#pragma once
class TwelveSideDie
{
public:
	TwelveSideDie() {
		int TwelvesideDieDiceNum[20] = { 1, 2, 3, 4,5,6,7,8,9,10,11,12};
		int TwelvesideRandIndex = rand() % 20; //generates a random number between 0 and 3
		std::cout << TwelvesideDieDiceNum[TwelvesideRandIndex] << std::endl;
		system("Pause");
	}
};

