#pragma once

#include <bitset>
#include <vector>

typedef unsigned long long EntityID;
const int MAX_COMPONENTS = 32;
typedef std::bitset<MAX_COMPONENTS> ComponentMask;

struct Entity
{
  EntityID id;
  ComponentMask mask;
};