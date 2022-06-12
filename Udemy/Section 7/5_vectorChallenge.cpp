//Section 7 Section Challange

#include <iostream>
#include <vector> 

//Note: From this point I have stopped using namespaces to make my code more readable
//Watch this video for more info: https://www.youtube.com/watch?v=4NYC-VU-svE

int main() {

    //Declare 2 empty vectors of integers named vector 1 and 2, respectively
    std::vector <int> vector1;
    std::vector <int> vector2;

    //Add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);

    //Display the elements in vector1 using the at() method as well as its size using the size() method
    std::cout << "Vector1 values are as follows:" << std::endl;
    std::cout << vector1.at(0) << std::endl; //10
    std::cout << vector1.at(1) << std::endl; //20
    std::cout << "Vector1 contains " << vector1.size() << " elements."<< std::endl; //2
   
    std::cout <<std::endl;

    //Add 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);

    //Display the elements in vector2 using the at() method as well as its size using the size() method
    std::cout << "Vector2 values are as follows:" << std::endl; 
    std::cout << vector2.at(0) << std::endl; //100
    std::cout << vector2.at(1) << std::endl; //200
    std::cout << "Vector2 contains " << vector1.size() << " elements."<< std::endl; //2

    std::cout <<std::endl;

    //Declare an empty 2D vector called vector_2d
    //Add vector1 to vector2d dynamically using pushback
    //Add vector2 to vector2d dynamically using pushback
    std::vector <std::vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    //Display the all of the elements of vector2d using the at() method
    std::cout << "Elements of the 2D Vector are as follows:  " << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "Elements of vector1 is: " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << std::endl; //10 20
    std::cout << "Elements of vector2 is: "<< vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << std::endl; //100 200

    //Change vector1.at(0) to 1000
    std::cout << "\n[!] Changing vector1's 1st element to 1000..." << std::endl;
    vector1.at(0) = 1000;

    std::cout <<std::endl; 

    //Display the all of the elements again of vector2d using the at() method
    std::cout << "Elements of the 2D Vector are as follows:  " << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "Elements of vector1 is: " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << std::endl; //10 20 -- 1st value did not change to 1000.
    std::cout << "Elements of vector2 is: "<< vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << std::endl; //100 200
   
    std::cout <<std::endl;

    //Display elements of vector1 again.
    std::cout << "Elements of vector1:  " << std::endl; 
    std::cout << vector1.at(0) << std::endl; //1000
    std::cout << vector1.at(1) << std::endl; //20

    std::cout <<std::endl;

    return 0; 

    /* Section Challange Questions:

    What did you expect?
    ====================
    I initially expected the 2D vector to display the value of 1000 for vector1 at index 0

    Did you get what you expected?
    ==============================
    No 

    What do you think happended?
    ===========================
    Looking back at the code, I noticed we used push_back method on line 43 & 44 to set the values within the 2D vector.

    So when we updated vector1's element values on line 54, we only updated vector1's value only and didn't apply those changes to the 2D vector. 

    Thus we would need to update vector2d values, as it still has vector1's values still in memory.

    */
}
