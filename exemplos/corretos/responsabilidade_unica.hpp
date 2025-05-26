#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Item{};

class Personagem {
private:
    std::string nome;
    int hp;
    int nivel;
    
public:
    Personagem(const std::string& nome, int hp) : nome(nome), hp(hp) {}
    
    const std::string& getNome() const { return nome; }
    int getHp() const { return hp;}
    void setHp(int novoHp) { hp = novoHp;}
};

class Inventario {
private:
    std::vector<Item> itens;
    int capacidade;
    
public:
    void adicionarItem(const Item& item){}
    void removerItem(const Item& item) {}
};

class Movimentacao {
private:
    int posX, posY;
    
public:
    void mover(int novoX, int novoY) { 
        posX = novoX; 
        posY = novoY;
    }
    
    std::pair<int, int> getPosicao() const { return {posX, posY}; }
};

class PersonagemRenderizador {
public:
    void renderizar(const Personagem& personagem, const Movimentacao& movimentacao) {}
};