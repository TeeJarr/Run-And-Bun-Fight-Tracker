#pragma once
#include "Stats.h"
#include "Types.h"

struct Species {
  const char* name;
  Type types[2];
  PkmnStats baseStats;
  int weight;
};

inline Species MEW = {"Mew", {Psychic, NULL_TYPE}, {100, 100, 100, 100, 100, 100}, 50};
