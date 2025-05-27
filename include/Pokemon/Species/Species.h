#pragma once
#include "Stats.h"
#include "Types.h"

struct Species {
  const char* name;
  Type types[2];
  PkmnStats baseStats;
  int weight;
};
