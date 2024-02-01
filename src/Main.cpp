#include "ecs/Component.h"
#include "ecs/Scene.h"
#include <iostream>

struct TransformComponent
{
  float position{1.0f};
  float rotation{2.0f};
};

int main(int argc, char *argv[])
{
  Scene scene;

  EntityID id = scene.CreateEntity();

  scene.Assign<TransformComponent>(id);

  ComponentMask transform = scene.GetComponentMask<TransformComponent>(id);

  if (transform != 0)
  {
    std::cout << "Has transform" << std::endl;
  }
  return 0;
}