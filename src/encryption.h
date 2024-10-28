#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>

class Encryption {
public:
    static std::string encrypt(const std::string& message);
    static std::string decrypt(const std::string& enc_message);
};

#endif // ENCRYPTION_H