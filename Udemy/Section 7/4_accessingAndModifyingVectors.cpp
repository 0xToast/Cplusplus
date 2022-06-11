//Section 7 Accessing and Modifying Vectors

#include <iostream>
#include <vector> 
using namespace std;

int main() {

    vector <char> vowelsEmpty; //empty vector - Only way to add to this vector is use the .push_back() method
    vector <char> vowelsZero (5); //initialised 5 elements to 0
    
    vector <char> vowels {'a','e','i','o','u'}; 

    cout << vowels[0] << endl; //a
    cout << vowels[4] << endl; //u

    //

    vector <int> scores0 (3); // 3 elements all initialised to 0
    vector <int> scoresSetTo100 (3, 100); // 3 elements intialised to 100

    //

    vector <int> testScores {100,98,89};
    
    //Accessing a vector using array syntax
    cout << "\nTest scores using arrary syntax:" << endl;
    cout << testScores[0] << endl; //100
    cout << testScores[1] << endl; //98
    cout << testScores[2] << endl; //89

    //Accessing a vector using vector syntax
    cout << "\nTest scores using vector syntax:" << endl;
    cout << testScores.at(0) << endl; //100
    cout << testScores.at(1) << endl; //98
    cout << testScores.at(2) << endl; //89
    
    //.size() method prints how many elements are in the vector.
    cout << "\n[+] There are " << testScores.size() << " elements in the vector." << endl; //3

    cout << "\nEnter 3 test scores: ";
    cin >> testScores.at(0); //Overwrites the element at index 0 with user input
    cin >> testScores.at(1); //Overwrites the element at index 1 with user input
    cin >> testScores.at(2); //Overwrites the element at index 2 with user input

    cout << "\nUpdated test scores:" << endl;
    cout << testScores.at(0) << endl; //Returns number that user inputted
    cout << testScores.at(1) << endl; //Returns number that user inputted
    cout << testScores.at(2) << endl; //Returns number that user inputted

    cout << "\nEnter a test score to add to the vector: ";

    int scoreToAdd {0};
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);

    cout << "\nEnter another test score to add to the vector: ";
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);

    cout << "\nTest scores are now: " << endl;
    cout << testScores.at(0) << endl; //Returns number that user inputted
    cout << testScores.at(1) << endl; //Returns number that user inputted
    cout << testScores.at(2) << endl; //Returns number that user inputted
    cout << testScores.at(3) << endl; //Returns number that user inputted
    cout << testScores.at(4) << endl; //Returns number that user inputted
    
    //.size() method prints how many elements are in the vector.
    cout << "\n[+] There are " << testScores.size() << " elements in the vector." << endl; //5 Elements

    //There is not element at index 10 of the vector, thus an error will occur.
    cout << "[!] - This will cause an exception error. " << testScores.at(10) << endl; 

    //

    //Example of a 2D-vector
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4}, // 0 = Reviewer 1
        {5,6,7,8}, // 1 = Reviewer 2
        {1,3,4,5}, // 2 = Reveiwer 3
    };

    // Array Syntax:
    cout << "\nHere are the movie ratings for reviewer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl; //1
    cout << movie_ratings[0][1] << endl; //2
    cout << movie_ratings[0][2] << endl; //3
    cout << movie_ratings[0][3] << endl; //4

    cout << "\nHere are the movie ratings for reviewer #2 using array syntax: " << endl;
    cout << movie_ratings[1][0] << endl; //5
    cout << movie_ratings[1][1] << endl; //6
    cout << movie_ratings[1][2] << endl; //7
    cout << movie_ratings[1][3] << endl; //8

    // Vector Syntax:
    cout << "\nHere are the movie ratings for reviewer #1 using vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl; //1
    cout << movie_ratings.at(0).at(1) << endl; //2
    cout << movie_ratings.at(0).at(2) << endl; //3
    cout << movie_ratings.at(0).at(3) << endl; //4

    cout << "\nHere are the movie ratings for reviewer #2 using vector syntax: " << endl;
    cout << movie_ratings.at(1).at(0) << endl; //5
    cout << movie_ratings.at(1).at(1) << endl; //6
    cout << movie_ratings.at(1).at(2) << endl; //7
    cout << movie_ratings.at(1).at(3) << endl; //8

    return 0; 
}
