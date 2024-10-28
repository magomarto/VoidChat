#include "interface.h"
#include <iostream>
#include <fstream>
#include <string>

void Interface::displayAsciiArt() {
    std::ifstream artFile("../src/ascii_art.txt");
    if (!artFile) {
        std::cerr << "Error: Could not open ascii_art.txt" << std::endl;
        return;
    }
    
    std::string line;
    while (std::getline(artFile, line)) {
        std::cout << line << std::endl;
    }
}

void Interface::showWelcomeMessage() {
    std::cout << "Hello Friend...Welcome to the void" << std::endl;
}

std::string Interface::getUserInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}