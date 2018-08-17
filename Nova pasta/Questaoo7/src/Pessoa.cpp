#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
    nome = "";
    idade = 0;
    telefone = "";
}

Pessoa::Pessoa(string n){
    nome = n;
    idade = 0;
    telefone = "";
}

Pessoa::Pessoa(string n, int i, string t){
    nome = n;
    idade = i;
    telefone = t;
}

void Pessoa::setNome(string n){
    nome = n;
}

void Pessoa::setIdade(int i){
    idade = i;
}

void Pessoa::setTelefone(string t){
    telefone = t;
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getTelefone(){
    return telefone;
}

