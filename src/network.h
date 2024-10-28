#ifndef NETWORK_H
#define NETWORK_H

#include <string>

class Network {
public:
    void connect(const std::string& address, int port);
    void send(const std::string& message);
    std::string receive();

private:
    // Variáveis para gerenciar a conexão de rede
};

#endif // NETWORK_H