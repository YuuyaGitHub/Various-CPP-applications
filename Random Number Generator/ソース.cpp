#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#endif

// Function to clear the console screen
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    // For non-Windows systems
    system("clear");
#endif
}

int main(int argc, char* argv[]) {
    // Check if the -cls argument is provided
    if (argc > 1 && std::string(argv[1]) == "-cls") {
        clearConsole();
    }

    // Set the seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Ask the user for the minimum and maximum values
    std::cout << "Enter the minimum value for the random number: ";
    int min_value;
    std::cin >> min_value;

    std::cout << "Enter the maximum value for the random number: ";
    int max_value;
    std::cin >> max_value;

    // Generate and display a single random number within the specified range
    int random_number = std::rand() % (max_value - min_value + 1) + min_value;
    std::cout << "\r\nYour Random number: " << random_number << std::endl;

    // Wait for user input before closing the program
    std::cout << "\r\n\r\nPress any key to exit..." << std::endl;
    std::cin.ignore(); // Ignore any previous newline characters in the input buffer
    std::cin.get();    // Wait for the user to press a key

    return 0;
}
