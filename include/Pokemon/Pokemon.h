#pragma once
#include "Abilities.h"
#include "Moves.h"
#include "Natures.h"
#include "Species.h"
#include "Stats.h"

PkmnStats calculateStats(Species species, PkmnStats EVs, PkmnStats IVs, int level, Nature nature);
PkmnStats calculateNatureBoost(PkmnStats stats, Nature nature);

struct Pokemon {
  Species species;
  int level;
  Ability ability;
  Nature nature;
  Move moves[4];
  PkmnStats EVs;
  PkmnStats IVs;
  PkmnStats currentStats = calculateStats(species, EVs, IVs, level, nature);
  int currentHP;
  int status;
};
