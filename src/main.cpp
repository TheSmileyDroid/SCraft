#include "../include/window.h"

#include <iostream>

int main(int argc, char *argv[]) {
  Window window;

  if (window.createWindow() == -1) {
    std::cout << "Error creating window" << std::endl;
    return -1;
  }

  window.renderWindow();

  window.destroyWindow();
  return 0;
}