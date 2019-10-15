#include <iostream>

int main()
{
    char grade;
	std::cout<<"Enter a grade: (A/B/C/D): "<<std::endl;
    std::cin>>grade;
    
    switch (grade){
        case 'A':
        case 'a':
            std::cout<<"You need a 90 above"<<std::endl;
            break;
        
        case 'B':
        case 'b':
            std::cout<<"You need a 80 above"<<std::endl;
            break;
        
        case 'C':
        case 'c':
            std::cout<<"You need a 70 above"<<std::endl;
            break;
            
        case 'D':
        case 'd':
            std::cout<<"You need a 60 above"<<std::endl;
            break;
        
        case 'F':
        case 'f':
            char confirm;
            std::cout<<"Are you sure (y/n): "<<std::endl;
            std::cin>>confirm;
            
            if (confirm == 'Y' ||  'y'){
                std::cout<<"Good Study"<<std::endl;
            }
            else if (confirm == 'N' || 'n'){
                std::cout<<"Go study"<<std::endl;
            }
            else 
                std::cout<<"invalid"<<std::endl;
            break;
        default: std::cout<<"Invalid Input"<<std::endl;
    }
	return 0;
}
