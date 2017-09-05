#include<iostream>
#include "FourSideDice.h"
#include "SixDice.h"
#include "EightsideDie.h"
#include "TensideDie.h"
#include "TwentySidedice.h"
#include "TwelveSideDie.h"

class Selector
{
public:
	void Selection(){
		srand(time(0));
		std::cout << "What # Die do you need?" << std::endl;
		int dice;
		std::cin >> dice;

		switch (dice){
		case 4:
			FourSideDice::FourSideDice();	
break;
		case 6:
			SixDice::SixDice();
break;
		case 8:
			EightsideDie::EightsideDie();
break;
		case 10:
			TensideDie::TensideDie();
break;

		case 12:
			TwelveSideDie::TwelveSideDie();
break;

		case 20:
			TwentySidedice::TwentySidedice();
			break;
		}
	}
};