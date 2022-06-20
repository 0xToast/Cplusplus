// Section 9 - Switch statement with Enum Type

#include <iostream>

int main() {

    enum Direction {
        left, right, up, down
    };

    Direction heading {left};

    switch (heading){
        case left:
            std::cout << "Going Left..." << std::endl;
            break;
        case right:
            std::cout << "Going Right..." << std::endl;
            break;
        case up:
            std::cout << "Going Up..." << std::endl;
            break;
        case down:
            std::cout << "Going Down..." << std::endl;
            break;
        default:
            std::cout << "[!] Invlalid selection" << std::endl;
            break;
    }

    std::cout << std::endl;
    return 0; 
}
