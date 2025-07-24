#include <iostream>
#include <string>
#include "auth.h"

void loginMenu() {
    int choice;
    std::string username, password;

    std::cout << "\n1. Login\n2. Signup\nEnter choice: ";
    std::cin >> choice;

    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    if (choice == 1) {
        // Placeholder: Validate login (to be implemented)
        std::cout << "Logging in as " << username << " ...\n";
        // Direct to teacher or student menu later
    } else {
        // Placeholder: Signup logic (to be implemented)
        std::cout << "Signing up user " << username << " ...\n";
    }
}
