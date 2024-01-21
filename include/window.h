#pragma once
#include <GLFW/glfw3.h>

class Window {
private:
  GLFWwindow *window;

public:
  int createWindow();
  int renderWindow();
  int destroyWindow();
};