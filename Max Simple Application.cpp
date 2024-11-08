#include <iostream>
#include <string>

using namespace std;

// Function to display a welcome message
void displayWelcome() {
    cout << "Welcome to Maxwell's C++ Application!" << endl;
}

// Function to get user's name and display a greeting
void greetUser() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! Nice to meet you!" << endl;
}

// Function to display the main menu
void displayMenu() {
    cout << "\n--- Main Menu ---" << endl;
    cout << "1. Display Welcome Message" << endl;
    cout << "2. Greet User" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        displayMenu();      // Show the menu to the user
        cin >> choice;      // Get user choice

        // Process the user's choice
        switch (choice) {
        case 1:
            displayWelcome();
            break;
        case 2:
            greetUser();
            break;
        case 3:
            cout << "Exiting the application. Goodbye!" << endl;
            running = false;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
