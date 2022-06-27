// Section 10 - Challenge - Substitution Cipher

/* 
My challange in this section was to take a sentence/string inputted by the user and apply a cipher to the text.

I also had to provide funtionality that decoded the text back to it's orgininal state.
*/

#include <iostream>
#include <string> 

int main() {

    // Cipher Key
    std::string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"); 
    std::string key      ("QwErTyUiOpAsDfGhJkLzXcVbNmqWeRtYuIoPaSdFgHjKlZxCvBnM");

    // Encode Function
    std::cout << "\nEncode Function: ";
    std::cout << "\n===========================";

    std::string message {};
    std::cout << "\n\nPlease enter your secret message: ";
    std::getline(std::cin, message); 

        for (size_t i {0}; i < message.size() ; ++i)
            if (isalpha(message.at(i))){

                size_t position {0};
                position = alphabet.find(message.at(i)); // 

                std::cout << key.at(position);
            } else {
                std::cout << message.at(i);
            }
    
    // Decode Function
    std::cout << "\n\nDecode Function: ";
    std::cout << "\n===========================";
    
    std::string encodedMessage {};

    std::cout << "\n\nPlease enter encoded message: ";
    std::getline(std::cin, encodedMessage); 

        for (size_t i {0}; i < encodedMessage.size() ; ++i)
            if (isalpha(encodedMessage.at(i))){
                                
            size_t position {0};
            position = key.find(encodedMessage.at(i));

            std::cout << alphabet.at(position);    
            } else {
                std::cout << encodedMessage.at(i);
            }   
                    
    return 0;   
}
