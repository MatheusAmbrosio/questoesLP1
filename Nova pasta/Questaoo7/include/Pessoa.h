#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;


class Pessoa
{
    public:

        Pessoa();
        Pessoa(string n);
        Pessoa(string n, int i, string t);
        string getNome();
        int getIdade();
        string getTelefone();
        void setNome(string n);
        void setIdade(int i);
        void setTelefone(string t);

    private:

        string nome;
        string telefone;
        int idade;
};

#endif // PESSOA_H
