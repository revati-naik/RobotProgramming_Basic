#include <iostream>
#include <cmath>
using namespace std;


const double pi{3.14159};

/*
int AddNumbers(int,int);//--prototype

int AddNumbers(int num1, int num2){
    return num1+num2;
}

int main()
{
    int a{1},b{2};
    std::cout << AddNumbers(a,b);
	return 0;
}
*/

/*void FirstVoid(){
    cout << "FirstVoid" << endl;
    return (void) "Does not print";
}

void SecondVoid(){
    cout << "SecondVoid" << endl;
    return FirstVoid();
}
int main(){
    SecondVoid();
    return 0;
}*/

/*
int ReturnGreaterNumber(int a, int b){
    if (a>b)
        return a;
        else if (b>a)
            return b;
        else return 0;
}

int main(){
    int a{8}, b{8};
    if (ReturnGreaterNumber(a,b)!=0)
        cout << "Greater of " << a << " and " << b << " is: " <<ReturnGreaterNumber(a,b) << endl;
    else
        cout << "Both numbers are equal" << endl;
    return 0;
}
*/

/*
int AddNumbers(int a, int b){
    
}

int main(){
    cout << AddNumbers(2,3);
    return 0;
}
*/


/*
void PrintArray(int arr[]);//--prototype

int main(){
    int i_arr[]{1,2,3,4};
    int arr_size = sizeof(i_arr)/sizeof(i_arr[0]);
    cout << arr_size << endl;
    PrintArray(i_arr);
    return 0;
}

void PrintArray (int arr_n[]){
    int arr_size = sizeof(arr_n)/sizeof(arr_n[0]);
    cout << arr_size << endl;
    //for (int i{0}; i<?????; ++i)//--what is the size of the array?
    //    cout << n[i] << endl;
}
*/


//--calling a function
/*
#include <cmath>
const double pi {3.14159}; 
 */

/*
double ComputeAreaCircle(double radius){
	return pi * pow(radius,2);
}

void PromptUser(){
	double radius{};
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "The area of the circle with radius " << radius << " is: " << ComputeAreaCircle(radius) << endl;
}

int main()
{
	PromptUser();

	return 0;
}
*/

int GetNumber();
int GetInteger();

int GetInteger(){
    int i{};
	cout << "Enter an Integer: ";
	cin >> i;

	if (i==2)
		return i;
	else
		return GetNumber();
}

int GetNumber(){
    GetInteger();
}

int main(){
    GetNumber();
    return 0;
}