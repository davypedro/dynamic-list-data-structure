#include "03_lista_estatica.h"

#include <iostream>

using namespace std;

int main()
{
    int menu, id, idade, quantidade_max;
    float peso, altura;
    string nome;

    cout << "Algoritmo gerador de lista estática!\n" << endl;
    cout << "Digite a quantidade máxima de pessoas a serem inseridas na lista dinâmica: " << endl;
    cin >> quantidade_max;

    Lista lista_individuos(quantidade_max);

    do
    {
        cout << "Digite 1 para inserir uma pessoa na lista!\n";
        cout << "Digite 2 para remover uma pessoa da lista!\n";
        cout << "Digite 3 para buscar uma pessoa na lista!\n";
        cout << "Digite 4 para imprimir a lista de pessoas!\n";
        cout << "Digite 5 para imprimir a quantidade de elementos válidos na lista!\n";
        cout << "Digite 6 para encerrar o algoritmo!\n";
        cin >> menu;

        if (menu < 1 || menu > 6)
        {
            cout << "Opção de menu não atribuída!\n";
            cout << "Digite uma opção válida!\n";
        }
        else
        {
            if (menu == 1)
            {
                cout << "Digite o id da pessoa: ";
                cin >> id;

                cout << "Digite o nome da pessoa: ";
                cin >> nome;

                cout << "Digite a idade da pessoa: ";
                cin >> idade;

                cout << "Digite o peso da pessoa: ";
                cin >> peso;

                cout << "Digite a altura da pessoa: ";
                cin >> altura;

                Pessoa inserido(id, idade, peso, altura, nome);

                bool resultado = lista_individuos.inserir(inserido);

                if (resultado)
                {
                    cout << "Pessoa id: " << id << " inserido com sucesso!\n";
                }
                else
                {
                    cout << "Pessoa id: " << id << " não inserido. A LISTA ESTÁ CHEIA!\n";
                }
            }
            else if (menu == 2)
            {
                cout << "Digite o id da pessoa a ser removida: ";
                cin >> id;

                Pessoa removido = lista_individuos.remover(id);

                if (removido.get_id() == -1)
                {
                    cout << "Pessoa id: " << id << " não se encontra na lista!\n";
                }
                else
                {
                    cout << "Pessoa id: " << id << " removido da lista!\n";
                    cout << "\tNome: " << removido.get_nome() << endl;
                    cout << "\tIdade: " << removido.get_idade() << " anos\n";
                    cout << "\tPeso: " << removido.get_peso() << " kg\n";
                    cout << "\tAltura: " << removido.get_altura() << " m\n";
                }
            }
            else if (menu == 3)
            {
                cout << "Digite o id da pessoa a ser buscado: ";
                cin >> id;

                Pessoa buscado = lista_individuos.buscar(id);

                if (buscado.get_id() == -1)
                {
                    cout << "Pessoa id: " << id << " não se encontra na lista!\n";
                }
                else
                {
                    cout << "Pessoa id: " << id << endl;
                    cout << "\tNome: " << buscado.get_nome() << endl;
                    cout << "\tIdade: " << buscado.get_idade() << " anos\n";
                    cout << "\tPeso: " << buscado.get_peso() << " kg\n";
                    cout << "\tAltura: " << buscado.get_altura() << " m\n";
                }
            }
            else if (menu == 4)
            {
                cout << "Lista de pessoas:\n";
                lista_individuos.imprimir();
            }
            else if(menu == 5)
            {
                cout << "A lista contém " << lista_individuos.quantidade_itens() << " pessoas!\n";
            }
        }
    } while (menu != 6);

    cout << "Fim do algoritmo!\n";

    return 0;
}
