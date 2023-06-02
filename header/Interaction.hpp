#ifndef INTERACTION__H
#define INTERACTION__H
#include "../header/npc.hpp"

class Interaction {
 private:
  int repGain;
  int moralGain;
 public:
    Interaction(npc, &playerManager, int);
};
#endif