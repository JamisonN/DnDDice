
class FourSideDice
{
public:
	 FourSideDice() {
		 int FourSideNum[4] = {1, 2, 3, 4};
		 int FourSideRandIndex = rand() % 3; //generates a random number between 0 and 3
		 std::cout << FourSideNum[FourSideRandIndex] <<std::endl;
		 system("Pause");
		}
	 ~FourSideDice(){
		 Selector();
	 }
};

