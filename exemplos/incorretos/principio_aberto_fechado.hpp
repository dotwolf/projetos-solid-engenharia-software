#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Personagem{int vida; int dano;};
enum TipoAtaque{cortante, magico, contudente};
class calcularDanoCortante{};

class DanoCalculador {
public:
    int calcularDano(const Personagem& atacante, const Personagem& alvo, TipoAtaque tipo) {
        switch(tipo) {
            case TipoAtaque::cortante:
                return 1;
            case TipoAtaque::magico:
                return 2;
            case TipoAtaque::contudente:
                return 3;
        }
        return 0;
    }
};