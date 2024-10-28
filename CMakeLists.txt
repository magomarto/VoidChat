cmake_minimum_required(VERSION 3.10)

project(VoidChat)
# Definir o padrão de C++ a ser usado
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(VoidChat 
    src/main.cpp 
    src/chat_client.cpp 
    src/encryption.cpp 
    src/network.cpp
    src/interface.cpp)