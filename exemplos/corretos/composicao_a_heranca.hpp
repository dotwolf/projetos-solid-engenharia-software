#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Atributos {
public:
    int vida;
    int forca;
};

class Habilidades {
public:
    void atacar(){}
    void magia(){}
};

class Entidade {
protected:
    Atributos atributos;
};

class Personagem : public Entidade {
public:
    Habilidades habilidades;
};

class NPC {
public:
    Atributos atributos;
    void dialogo(){}
};

class Monstro {
public:
    Atributos atributos;
};

class Goblin {
public:
    Atributos atributos;
    void roubar(){}
};