#pragma once

#include "Entity.h"

class Scene
{
public:
  std::vector<Entity> entities;

  EntityID CreateEntity();

  template <typename T>
  void Assign(EntityID id)
  {
    int componentId = GetId<T>();
    entities[id].mask.set(componentId);
  }

  template <typename T>
  ComponentMask GetComponentMask(EntityID id)
  {
    int componentId = GetId<T>();
    return entities[id].mask.test(componentId);
  }

  template <typename T>
  void RemoveComponent(EntityID id)
  {
    int componentId = GetId<T>();
    entities[id].mask.reset(componentId);
  }
};