// 60. Vector Challange

#include <iostream>
#include <vector> 
using namespace std;

int main() {

    //Declare 2 empty vectors named vector1 and vector 2
    vector <int> vector1;
    vector <int> vector2;

    //Add the values 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);

    //Display the elements in vector1 using the at() mehtod.
    cout << "\nThe values of vector1 are as follows: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << endl;

    cout << "The are " << vector1.size() << " elements within vector1.";
    cout << endl;

    //Add the values 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);

    //Display the elements in vector2 using the at() mehtod as well as it's size using the size() method
    cout << "\nThe values of vector2 are as follows: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << endl;

    cout << "The are " << vector2.size() << " values within vector2.\n";
    cout << endl;

    //Declare an empty 2D vector called_2d
    vector <vector <int>> vector_2d;
    
    //Add vector1 and vector2 to vector_2d dynamically using push_back method
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Dislay the elements of vector_2d using the at() method
    cout << "Printing the values of vector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    //Change the value of vector1.at(0) to 1000
    cout << "\nChaning vector1's 0 element to 1000." << endl;
    vector1.at(0) = 1000;

    //Dislay the elements of vector_2d using the at() method
    cout << "\nPrinting the values of vector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    //Display the elements in vector1 using the at() mehtod.
    cout << "\nThe values of vector1 are as follows: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << endl;

    //What did you expect versus what you got?
    //Before doing this, I expected the same value to change in vector_2d. Thus, I did not get what I expected.

    //What do you think happened?
    //At this point in the course, I can only assume that the vector_2d is considered it's own object in C++. Thus the change would need to be applied to the other object as well.

    return 0;
}
