#ifndef CHAT_CLIENT_H
#define CHAT_CLIENT_H

#include <string>

class ChatClient {
public:
    ChatClient();
    void run();
    void sendMessage(const std::string& message);
    void receiveMessages();

private:
    void connectToPeer(const std::string& address, int port);
    // outras variaveis necessarias? sockets?
};

#endif // CHAT_CLIENT_H