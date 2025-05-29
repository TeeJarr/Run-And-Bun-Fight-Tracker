#pragma once
#include "Natures.h"
#include <sys/types.h>

struct PkmnStats {
  u_int16_t HP;
  u_int16_t Attack;
  int Defense;
  int SpAttack;
  int SpDefense;
  int Speed;
};
