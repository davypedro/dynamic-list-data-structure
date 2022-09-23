#include "01_pessoa.h"

using namespace std;

Pessoa::Pessoa() {
  this->id = -1;
  this->idade = 0;
  this->peso = 0;
  this->altura = 0;
  this->nome = "";
}
Pessoa::Pessoa(int id, int idade, float peso, float altura, string nome) {
  this->id = id;
  this->idade = idade;
  this->peso = peso;
  this->altura = altura;
  this->nome = nome;
}

int Pessoa::get_id() { return this->id; }

int Pessoa::get_idade() { return this->idade; }
void Pessoa::set_idade(int idade) { this->idade = idade; }

float Pessoa::get_peso() { return this->peso; }
void Pessoa::set_peso(float peso) { this->peso = peso; }

float Pessoa::get_altura() { return this->altura; }
void Pessoa::set_altura(float altura) { this->altura = altura; }

string Pessoa::get_nome() { return this->nome; }
