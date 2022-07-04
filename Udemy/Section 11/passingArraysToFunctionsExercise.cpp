// Section 11 - Passing Arrays to Functions - Exercise

/* 
In this exercise, I needed to create a program that will be used to print a guest list for an event.
I would then need to clear the event list when the event was over.
*/

#include <iostream>
#include <string>

std::string printGuestList(const std::string[], size_t);
void clearGuestList(std::string[], size_t);

std::string printGuestList(const std::string guest_list[], size_t guest_list_size) {
    for (size_t i{0}; i < guest_list_size; i++)
        std::cout 
            << guest_list[i] << "\n";          
    return typeid(guest_list).name(); // I need to look into this method. Not entirely sure what it is doing.
}

void clearGuestList(std::string guest_list[], size_t guest_list_size) {
    for (size_t i{0}; i < guest_list_size; i++)
        guest_list[i] = " ";      
}


int main() {
    std::string guest_list[] {"Larry", "Moe", "Curly"};

    printGuestList(guest_list, 3);
    clearGuestList(guest_list, 3);
    printGuestList(guest_list, 3);

    return 0;
}
