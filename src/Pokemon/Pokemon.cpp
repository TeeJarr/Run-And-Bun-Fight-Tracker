#include "Pokemon.h"
#include <cmath>

PkmnStats calculateStats(Species species, PkmnStats EVs, PkmnStats IVs, int level, Nature nature) {
  PkmnStats currentStats;

  currentStats.HP        = std::floor(0.01 * (2 * species.baseStats.HP + IVs.HP + std::floor(0.25 * EVs.HP)) * level) + level + 10;
  currentStats.Attack    = std::floor(0.01 * (2 * species.baseStats.Attack + IVs.Attack + std::floor(0.25 * EVs.Attack) * level) + 5);
  currentStats.Defense   = std::floor(0.01 * (2 * species.baseStats.Defense + IVs.Defense + std::floor(0.25 * EVs.Defense) * level) + 5);
  currentStats.SpAttack  = std::floor(0.01 * (2 * species.baseStats.SpAttack + IVs.SpAttack + std::floor(0.25 * EVs.SpAttack) * level) + 5);
  currentStats.SpDefense = std::floor(0.01 * (2 * species.baseStats.SpDefense + IVs.SpDefense + std::floor(0.25 * EVs.SpDefense) * level) + 5);
  currentStats.Speed     = std::floor(0.01 * (2 * species.baseStats.Speed + IVs.Speed + std::floor(0.25 * EVs.Speed) * level) + 5);

  return calculateNatureBoost(currentStats, nature);
}

PkmnStats calculateNatureBoost(PkmnStats stats, Nature nature) {
  switch (nature.increase) {
    case ATTACK   : stats.Attack *= 1.1;
    case DEFENSE  : stats.Defense *= 1.1;
    case SPATTACK : stats.SpAttack *= 1.1;
    case SPDEFENSE: stats.SpDefense *= 1.1;
    case SPEED    : stats.Speed *= 1.1;
  }
  switch (nature.decrease) {
    case ATTACK   : stats.Attack *= 0.9;
    case DEFENSE  : stats.Defense *= 0.9;
    case SPATTACK : stats.SpAttack *= 0.9;
    case SPDEFENSE: stats.SpDefense *= 0.9;
    case SPEED    : stats.Speed *= 0.9;
  }
  return stats;
}
