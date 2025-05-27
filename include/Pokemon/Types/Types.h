#pragma once

enum TypeIDs {
  NULL = 0,
  NORMAL,
  FIGHTING,
  WATER,
  FIRE,
  GRASS,
  ELECTRIC,
  FLYING,
  DARK,
  PSYCHIC,
  BUG,
  ROCK,
  GROUND,
  ICE,
  DRAGON,
  FAIRY,
  STEEL,
  POISON,
  GHOST
};

struct Type {
  const char* name;
  int id;
  int superEffective[10];
  int notEffective[10];
  int immune[3];
};

inline Type Normal    = {"Normal", NORMAL, {}, {ROCK, STEEL}, {GHOST}};
inline Type NULL_TYPE = {" ", NULL, {}, {}, {}};
inline Type Fighting  = {"Fighting",
                         FIGHTING,
                         {NORMAL, ROCK, STEEL, ICE, DARK},
                         {FAIRY, POISON, FLYING, PSYCHIC, BUG},
                         {GHOST}};
inline Type Fire      = {"Fire", FIRE, {GRASS, ICE, STEEL, BUG}, {WATER, ROCK, FIRE, DRAGON}, {}};
inline Type Water     = {"Water", WATER, {FIRE, ROCK, GROUND}, {WATER, GRASS, DRAGON}, {}};
inline Type Grass = {"Grass", GRASS, {WATER, ROCK, GROUND}, {STEEL, FLYING, FIRE, DRAGON, BUG}, {}};
inline Type Electric = {"Electric", ELECTRIC, {WATER, FLYING}, {GRASS, ELECTRIC, DRAGON}, {GROUND}};
inline Type Ground   = {"Ground", GROUND, {ROCK, FIRE, STEEL, ELECTRIC}, {GRASS, BUG}, {FLYING}};
inline Type Ice      = {"Ice", ICE, {FLYING, GRASS, DRAGON, GROUND}, {FIRE, WATER, ICE, STEEL}, {}};
inline Type Poison   = {"Poison", POISON, {GRASS, FAIRY}, {ROCK, GROUND, GHOST, FIGHTING}, {STEEL}};
inline Type Flying   = {"Flying", FLYING, {GRASS, FIGHTING, BUG}, {ROCK, STEEL, ELECTRIC}, {}};
inline Type Psychic  = {"Psychic", PSYCHIC, {FIGHTING, POISON}, {PSYCHIC, STEEL}, {DARK}};
inline Type Bug      = {
    "Bug", BUG, {GRASS, PSYCHIC, DARK}, {FIRE, FIGHTING, POISON, FLYING, STEEL, FAIRY}, {}};
inline Type Rock   = {"Rock", ROCK, {FIRE, ICE, FLYING, BUG}, {FIGHTING, GROUND, STEEL}, {}};
inline Type Ghost  = {"Ghost", GHOST, {PSYCHIC, GHOST}, {DARK}, {NORMAL}};
inline Type Dragon = {"Dragon", DRAGON, {DRAGON}, {STEEL}, {FAIRY}};
inline Type Dark   = {"Dark", DARK, {PSYCHIC, GHOST}, {FIGHTING, DARK, FAIRY}, {}};
inline Type Steel  = {"Steel", STEEL, {ICE, ROCK, FAIRY}, {FIRE, WATER, ELECTRIC, STEEL}, {}};
inline Type Fairy  = {"Fairy", FAIRY, {FIGHTING, DRAGON, DARK}, {FIRE, POISON, STEEL}, {}};
