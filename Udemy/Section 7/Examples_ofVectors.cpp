//This section contains examples of vectors in C++

#include <iostream>
#include <vector> 
using namespace std;

int main() {

    //vector <char> vowels;         // Empty - size is 0 (only way to add to this vector is use the .push_back() method)
    //vector <char> vowels (5);     // 5 elements all initialised as 0.
    vector <char> vowels {'a','e','i','o','u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    cout << endl;

    //vector <int> testScore (3);   // 3 elements all initialised to zero
    //vector <int> testScore (3, 100);  // 3 elements all initialized to 100
    vector <int> testScore {100, 98, 89};

    //Array syntax
    cout << "Array syntax: "<< endl;
    cout << testScore[0] << endl; // 100
    cout << testScore[1] << endl; // 98
    cout << testScore[2] << endl; // 89
    cout << endl;

    //Vector syntax
    cout << "Vector syntax: "<< endl;
    cout << testScore.at(0) << endl; // 100
    cout << testScore.at(1) << endl; // 98
    cout << testScore.at(2) << endl; // 89

    //Check how many items are in the vector - can use the .size() method
    cout << "\nThere are " << testScore.size() << " scores within the testScore vector" << endl; 
    cout << endl;

    //Updating values in vectors with user input
    cout << "Enter 3 test scores: " << endl;
    cin >> testScore.at(0);
    cin >> testScore.at(1);
    cin >> testScore.at(2);
    cout << endl;

    cout << "Scores have been updated to the following: " << endl;
    cout << testScore.at(0) << endl;
    cout << testScore.at(1) << endl;
    cout << testScore.at(2) << endl;
    cout << endl;

    //Add a new element to the vector using the push_back method
    int newTestScore {0};
    cout << "Add a new test score to the vector: ";
    cin >> newTestScore;

    testScore.push_back(newTestScore); //This adds the new element and it's value to the back (last value) of the vector

    cout << "\nAdd another test score to the vector: ";
    cin >> newTestScore;

    testScore.push_back(newTestScore); //This adds the new element and it's value to the back (last value) of the vector

    cout << "\nTest scores are now: " << endl;

    cout << testScore.at(0) << endl;
    cout << testScore.at(1) << endl;
    cout << testScore.at(2) << endl;
    cout << testScore.at(3) << endl;
    cout << testScore.at(4) << endl;

    cout << "\nThere are now " << testScore.size() << " scores in the vector." << endl;

    // Example of an exception.
    //cout << "[!] This should cause an exception: " << testScore.at(100);

    //Example of a 2D-vector
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5},
    };

    // Array Syntax:
    cout << "\nHere are the movie ratings for reviewer #1 array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    // Vector Syntax:
    cout << "\nHere are the movie ratings for reviewer #1 vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    return 0;
}
