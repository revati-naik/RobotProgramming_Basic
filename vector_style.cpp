#include <iostream>
#include <vector>   // don't forget this in order to use vectors

using namespace std;

int main() {

//    cout << "----------------------------------------------------------" << endl;
//    vector <char> my_letters {'a' , 'b', 'c', 'd', 'e'};
//    cout << my_letters[0] << endl;
//    cout << my_letters[4] << endl;
    

    cout << "----------------------------------------------------------" << endl;
    vector <int> my_test_scores (3);  // 3 elements all initialized to zero
    //vector <int> my_test_scores (3, 100); // 3 elements all initialized to 100
    //vector <int> my_test_scores {15,22,87};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << my_test_scores[0] << endl;
    cout << my_test_scores[1] << endl;
    cout << my_test_scores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << my_test_scores.at(0) << endl;
    cout << my_test_scores.at(1) << endl;
    cout << my_test_scores.at(2) << endl;
    cout << "\nThere are " << my_test_scores.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 test scores: ";
    cin  >> my_test_scores.at(0);
    cin >> my_test_scores.at(1);
    cin >> my_test_scores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    
    cout << my_test_scores.at(0) << endl;
    cout << my_test_scores.at(1) << endl;
    cout << my_test_scores.at(2) << endl;


	//================================================

    cout << "----------------------------------------------------------" << endl;
    cout << "\nEnter a test score to add to the vector: ";
    
    int score_to_add {0};
    cin >> score_to_add;
    
    my_test_scores.push_back(score_to_add);
    
    cout << "\nEnter one more test score to add to the vector: ";
    
    cin >> score_to_add;
    
    my_test_scores.push_back(score_to_add);
    
     cout << "\nTest scores are now: " << endl;
    
    cout << my_test_scores.at(0) << endl;
    cout << my_test_scores.at(1) << endl;
    cout << my_test_scores.at(2) << endl;
    cout << my_test_scores.at(3) << endl;
    cout << my_test_scores.at(4) << endl;
    
    cout << "\nThere are now " << my_test_scores.size() << " scores in the vector" << endl;

    //cout << "This may or may not cause an exception!!" << my_test_scores[10]<< endl;
    //cout << "This should cause an exception!!" << my_test_scores.at(10) << endl;


    return 0;
}

