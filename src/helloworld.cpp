#include "../include/helloworld.h"
#include <iostream>

void HelloWorld::sayHello() { std::cout << "Hello World!" << std::endl; }

std::string HelloWorld::getHello() { return "Hello World!"; }
