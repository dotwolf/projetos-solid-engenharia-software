#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Item{};

class Personagem {
    private:
        std::string nome;
        std::vector<Item> inventario;
        int hp;
        int lvl;
        int pos_x; int pos_y;
    public:
        void atacar(Personagem& atacante, Personagem& atacado);
        void bloquear(Personagem& atacado, Personagem& atacante);
        void andar(int x, int y, int dir_x, int dir_y);
        void descansar(Personagem& personagem);
        void render(Personagem& personagem,int x, int z);
};