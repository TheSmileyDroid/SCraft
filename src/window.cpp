#include "../include/window.h"

#include <GLFW/glfw3.h>

#include <iostream>

int Window::createWindow() {
  if (!glfwInit()) {
    std::cout << "Error initializing GLFW" << std::endl;
    return -1;
  }

  this->window = glfwCreateWindow(640, 480, "SCraft", NULL, NULL);
  if (!window) {
    std::cout << "Error creating window" << std::endl;
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  return 0;
}

int Window::renderWindow() {
  if (this->window == NULL)
    return -1;

  while (!glfwWindowShouldClose(this->window)) {
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(this->window);

    glfwPollEvents();
  }

  return 0;
}

int Window::destroyWindow() {
  if (this->window == NULL)
    return -1;

  glfwDestroyWindow(this->window);
  glfwTerminate();

  return 0;
}