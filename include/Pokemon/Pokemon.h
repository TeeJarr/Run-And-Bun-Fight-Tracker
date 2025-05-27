#pragma once
#include "Abilities.h"
#include "Moves.h"
#include "Natures.h"
#include "Species.h"
#include "Stats.h"
#include <cmath>

PkmnStats calculateStats(Species species, PkmnStats EVs, PkmnStats IVs, int level, Nature nature);

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

PkmnStats calculateStats(Species species, PkmnStats EVs, PkmnStats IVs, int level, Nature nature) {
  PkmnStats currentStats;

  currentStats.HP =
      std::floor(0.01 * (2 * species.baseStats.HP + IVs.HP + std::floor(0.25 * EVs.HP)) * level) +
      level + 10;
  currentStats.Attack = std::floor(
      0.01 * (2 * species.baseStats.Attack + IVs.Attack + std::floor(0.25 * EVs.Attack) * level) +
      5);

  currentStats.Defense   = std::floor(0.01 * (2 * species.baseStats.Defense + IVs.Defense +
                                            std::floor(0.25 * EVs.Defense) * level) +
                                      5);
  currentStats.SpAttack  = std::floor(0.01 * (2 * species.baseStats.SpAttack + IVs.SpAttack +
                                             std::floor(0.25 * EVs.SpAttack) * level) +
                                      5);
  currentStats.SpDefense = std::floor(0.01 * (2 * species.baseStats.SpDefense + IVs.SpDefense +
                                              std::floor(0.25 * EVs.SpDefense) * level) +
                                      5);
  currentStats.Speed     = std::floor(
      0.01 * (2 * species.baseStats.Speed + IVs.Speed + std::floor(0.25 * EVs.Speed) * level) + 5);

  // TODO: Calculate the stat differences from the natures

  return currentStats;
}
