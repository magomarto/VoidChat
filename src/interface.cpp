#include "interface.h"
#include <iostream>

void Interface::displayMessage(const std::string& message) {
    std::cout << message << std::endl;
}

std::string Interface::getUserInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}

void Interface::showWelcomeMessage() {
    displayMessage("Welcome to VoidChat! Type your message below:");
}