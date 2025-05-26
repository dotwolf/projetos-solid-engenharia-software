#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Entidade {};

class Personagem: public Entidade {};

class NPC: public Personagem {};

class Monstro: public Personagem {};

class Goblin: public Monstro{};