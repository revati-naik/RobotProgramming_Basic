#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //-- slide 8
 /*   
    { //-- Start of compound statement 1
        int a{10};
        if(a <= 100) { //-- Start of compound statement 2
            cout << "a is: " << a << endl;
        } //-- End of compound statement 2
    }     //-- End of compound statement 1
 */   
    
    //-- slide 12
/*
    int x{100};
    if(x == 100)
        cout << "x is 100\n";
    cout << "next\n";
*/

    //--slide 18
/*
    int score{ 80 };

    if(score >= 90)
        cout << "A\n";
    else if(score >= 80)
        cout << "B\n";
    else if(score >= 70)
        cout << "C\n";
    else if(score >= 60)
        cout << "D\n";
    else // all others must be F
        cout << "F\n";
*/

    //--slide 24
/*
    int score{80};

    if(score >= 93) {
        if(score > 96)
            cout << "A+\n";
        else
            cout << "A\n";
    } 
    else
        cout << "Sorry, no grade A!" << endl;
*/

    //-- slide 37
/*    int i{2};

    switch(i) {
    case 1:
        cout << "1";
    case 2:
        cout << "2";//-- execution starts at this case label
    case 3:
        cout << "3";
        break;//-- execution of subsequent statements is terminated
    case 4:
        cout << "4";
    case 5:
        cout << "5";
}

cout << " Exit switch" << endl;
*/

    //-- slide 39
/*   int i{ 1 };

    switch(i) {
    case 1:
        cout << "1\n"; //-- execution starts at this case label
        break;         //-- execution of subsequent statements is terminated
    case 2:
        cout << "2\n";
        break; //-- execution of subsequent statements is terminated
    case 3:
        cout << "3\n";
        break; //-- execution of subsequent statements is terminated
    default:
        cout << "No entry\n";
        break;
    }
 */ 

    //--slide 48
/*    double weight {20.5};
    double payload {25.8};
    cout << ((weight < payload) ? "Can pick up\n" : "Abort\n");

    //-- using a variable to store the result  
    string result{};
    result = (weight < payload) ? "Can pick up" : "Abort";
    cout << result << endl;
*/

    //--slide 55
/*    int n{0};
    for (cout << "Loop start\n";
     cout << "Loop test\n";
     cout << "Iteration " << ++n << '\n')
        if(n > 1)
            break;
        
    cout << '\n';
*/

    //--slide 66
/*    bool done {false};
    int number{0};

    while (!done){
        cout << "Enter an integer number between 0 and 10: ";
        cin >> number;
        if (number > 10 || number < 0)
            cout << "Out of range\n";
        else{
            cout << "The number you entered is: " << number << endl;
            done = true;
        }
    }
*/


/*
vector<vector<int>> vector_2d{
    {1,2,3},
    {4,5,6,7},
    {8,9,10,11,12}
};
    
for (auto vec: vector_2d){
    for (auto val:vec){
        cout << val << " ";
    }
cout << endl;
}
*/
    return 0;
}