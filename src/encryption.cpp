#include "encryption.h"
#include <openssl/aes.h> // REMEMBER search for other crypto libs

std::string Encryption::encrypt(const std::string& message) {
    // crypto logic here
    return message; // Exemplo placeholder
}

std::string Encryption::decrypt(const std::string& enc_message) {
    // Idecrypt logic here
    return enc_message; // Exemplo placeholder
}