#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>

class Interface {
public:
    void displayMessage(const std::string& message);
    std::string getUserInput();
    void showWelcomeMessage();
};

#endif // INTERFACE_H