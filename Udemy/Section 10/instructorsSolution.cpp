// Section 10 - Challange - Instructor's Solution 

#include <iostream>
#include <string> 

int main() {

    // Cipher Key
    std::string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"); 
    std::string key      ("QwErTyUiOpAsDfGhJkLzXcVbNmqWeRtYuIoPaSdFgHjKlZxCvBnM");

    std::string message{};
    
    std::cout << "Enter your secret message: ";
    std::getline(std::cin, message);

    std::string encryptedMessage {};

    for (char c : message) {
        size_t position = alphabet.find(c);
        if (position != std::string::npos) {
            char newChar {key.at(position)};
            encryptedMessage += newChar;
        } else {
            encryptedMessage += c;
        }
    }

    std::cout << "\nEncrypted message: " << encryptedMessage << std::endl;

    std::string decrytedMessage {};

    for (char c : encryptedMessage) {
        size_t position = key.find(c);
        if (position != std::string::npos) {
            char newChar {alphabet.at(position)};
            decrytedMessage += newChar;
        } else {
            decrytedMessage += c;
        }
    }
    std::cout << "\nDecrypted message: " << decrytedMessage << std::endl;
    
    return 0;   
}
