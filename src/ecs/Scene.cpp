#include "ecs/Scene.h"

EntityID Scene::CreateEntity()
{
  entities.push_back(Entity{entities.size(), ComponentMask()});
  return entities.back().id;
}