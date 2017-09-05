#pragma once
class EightsideDie
{
public:
	EightsideDie() {
		int EightarrayNum[8] = { 1, 2, 3, 4,5,6,7,8 };
		int eightRandIndex = rand() % 8; //generates a random number between 0 and 3
		std::cout << EightarrayNum[eightRandIndex] << std::endl;
		system("Pause");
	}
	

};

