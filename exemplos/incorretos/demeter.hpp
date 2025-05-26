#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Inventario {
public:
    int getPeso() const { return 50; }
};

class Personagem {
public:
    Inventario& getInventario() { return inventario; }
    int getForca() const { return 30; }
private:
    Inventario inventario;
};

bool podePegarItem(Personagem& personagem, int pesoItem) {
    return (personagem.getInventario().getPeso() + pesoItem)  < (personagem.getForca() * 2);
}