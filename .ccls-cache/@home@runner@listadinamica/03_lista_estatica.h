#include "01_pessoa.h"

using namespace std;

class Lista
{
private:
    int quantidade_max;
    Pessoa *lista;
public:
    Lista(int quantidade_max);
    ~Lista();

    bool esta_vazia();
    bool esta_cheia();
    int quantidade_itens();

    bool inserir(Pessoa pessoa);
    Pessoa remover(int id);
    Pessoa buscar(int id);

    void imprimir();
};
