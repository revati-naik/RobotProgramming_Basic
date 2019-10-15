#include <iostream>


int main()
{
    int no_of_pegs;
    int remaining_pegs;
	std::cout<<"Enter the number of pegs to put in the boxes"<<std::endl;
    std::cin>>no_of_pegs;
    std::cout<<"Boxes that can be built with "<<no_of_pegs<<" pegs:"<<std::endl;
    std::cout<<"Huge Boxes (100 max): "<<(no_of_pegs/100)<<"--Remaining pegs: "<<(no_of_pegs%100)<<std::endl;
    no_of_pegs=no_of_pegs%100;
    std::cout<<"Large Boxes (25 max): "<<(no_of_pegs/25)<<"--Remaining pegs: "<<(no_of_pegs%25)<<std::endl;
    no_of_pegs=no_of_pegs%25;
    std::cout<<"Medium Boxes (25 max): "<<(no_of_pegs/10)<<"--Remaining pegs: "<<(no_of_pegs%10)<<std::endl;
    no_of_pegs=no_of_pegs%25;
    std::cout<<"Small Boxes (25 max): "<<(no_of_pegs/5)<<"--Remaining pegs: "<<(no_of_pegs%5)<<std::endl;
    no_of_pegs=no_of_pegs%25;
	return 0;
}
