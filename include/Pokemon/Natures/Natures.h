#pragma once

enum NatureIDs {
  HARDY,
  LONELY,
  ADAMANT,
  NAUGHTY,
  BRAVE,
  BOLD,
  DOCILE,
  IMPISH,
  LAX,
  RELAXED,
  MODEST,
  MILD,
  BASHFUL,
  RASH,
  QUIET,
  CALM,
  GENTLE,
  CAREFUL,
  QUIRKY,
  SASSY,
  TIMID,
  HASTY,
  JOLLY,
  NAIVE,
  SERIOUS,
};

enum Stats { ATTACK, DEFENSE, SPATTACK, SPDEFENSE, SPEED };

struct Nature {
  const char* name;
  int id;
  int increase;
  int decrease;
};

inline Nature Adamant = {"Adamant", ADAMANT, ATTACK, SPATTACK};
inline Nature Lonely  = {"Lonely", LONELY, ATTACK, DEFENSE};
inline Nature Naughty = {"Naughty", NAUGHTY, ATTACK, SPDEFENSE};
inline Nature Brave   = {"Brave", BRAVE, ATTACK, SPEED};
inline Nature Hardy   = {"Hardy", HARDY, ATTACK, ATTACK};
inline Nature Bold    = {"Bold", BOLD, DEFENSE, ATTACK};
inline Nature Docile  = {"Docile", DOCILE, DEFENSE, DEFENSE};
inline Nature Impish  = {"Impish", IMPISH, DEFENSE, SPATTACK};
inline Nature Lax     = {"Lax", LAX, DEFENSE, SPDEFENSE};
inline Nature Relaxed = {"Relaxed", RELAXED, DEFENSE, SPEED};
inline Nature Modest  = {"Modest", MODEST, SPATTACK, ATTACK};
inline Nature Mild    = {"Mild", MILD, SPATTACK, DEFENSE};
inline Nature Bashful = {"Bashful", BASHFUL, SPATTACK, SPATTACK};
inline Nature Rash    = {"Rash", RASH, SPATTACK, SPDEFENSE};
inline Nature Quiet   = {"Quiet", QUIET, SPATTACK, SPEED};
inline Nature Calm    = {"Calm", CALM, SPDEFENSE, ATTACK};
inline Nature Gentle  = {"Gentle", GENTLE, SPDEFENSE, SPDEFENSE};
inline Nature Careful = {"Careful", CAREFUL, SPDEFENSE, SPATTACK};
inline Nature Quirky  = {"Quirky", QUIRKY, SPDEFENSE, SPDEFENSE};
inline Nature Sassy   = {"Sassy", SASSY, SPDEFENSE, SPEED};
inline Nature Timid   = {"Timid", TIMID, SPEED, ATTACK};
inline Nature Hasty   = {"Hasty", HASTY, SPEED, DEFENSE};
inline Nature Jolly   = {"Jolly", JOLLY, SPEED, SPATTACK};
inline Nature Naive   = {"Naive", NAIVE, SPEED, SPDEFENSE};
inline Nature Serious = {"Serious", SERIOUS, SPEED, SPEED};
