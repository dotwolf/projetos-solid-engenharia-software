class Inventario {
public:
    int getPeso() const { return 50; }
};

class Personagem {
public:
    int getForca() const { return 30; }
    bool podeCarregar(int pesoAdicional) const {
        return (inventario.getPeso() + pesoAdicional) < (getForca() * 2);
    }
private:
    Inventario inventario;
};

bool podePegarItem(Personagem& personagem, int pesoItem) {
    return personagem.podeCarregar(pesoItem);
}