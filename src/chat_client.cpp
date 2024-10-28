#include "chat_client.h"
#include "interface.h"
#include <iostream>

ChatClient::ChatClient() {
    // Inicialização do cliente, conexões, etc.
}

void ChatClient::run() {
    Interface ui; 
    ui.displayAsciiArt(); // Exibe a arte ASCII
    ui.showWelcomeMessage();

    std::string message;
    while (true) {
        message = ui.getUserInput();
        if (message.empty()) {
            continue;
        }
        sendMessage(message);
        receiveMessages();
    }
}

void ChatClient::sendMessage(const std::string& message) {
    // implementar logica para criptografar a mensagem antes de enviar para rede
    std::cout << "Sending: " << message << std::endl; // Simulação de envio
    // implementar logica para enviar a mensagem pela rede...
}

void ChatClient::receiveMessages() {
    // Simulação de recebimento de mensagens
    // adicionar a lógica para receber e descriptografar mensagens
    std::string receivedMessage = "Simulated received message"; // Simulação
    std::cout << "Received: " << receivedMessage << std::endl; // Exibe mensagem recebida
}
