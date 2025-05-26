#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CalculaDano {
public:
    virtual int calcular() = 0;
};

class DanoEspada : public CalculaDano {
public:
    int calcular() override { return 10; }
};

class DanoMagia : public CalculaDano {
public:
    int calcular() override { return 20; }
};

class Combatente {
public:
    int atacar(CalculaDano& tipoDano) {
        return tipoDano.calcular();
    }
};