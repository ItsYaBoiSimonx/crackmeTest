#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string username;
    std::string token;
    std::string flippedUsername;
    std::string lastThreeLetters;
    std::string numericLastThreeLetters;
    bool accessGranted = false;

    while (!accessGranted) {
        std::cout << "Enter your username: ";
        std::cin >> username;
        std::cout << "Enter your token: ";
        std::cin >> token;

        flippedUsername = username;
        std::reverse(flippedUsername.begin(), flippedUsername.end());
        lastThreeLetters = flippedUsername.substr(flippedUsername.length() - 3);
        numericLastThreeLetters = std::to_string(lastThreeLetters[0]) + std::to_string(lastThreeLetters[1]) + std::to_string(lastThreeLetters[2]);

        if (token == numericLastThreeLetters) {
            std::cout << "Access Granted! Now make a keygen." << std::endl;
            accessGranted = true;
        } else {
            std::cout << "Access Denied" << std::endl;
        }
    }
    return 0;
}