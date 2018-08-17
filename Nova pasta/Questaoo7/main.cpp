#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa p1 = Pessoa();

    int i;
    string n, t;

    cout << "Digite o nome: ";
    cin >> n;
    p1.setNome(n);

    cout << "Digite a idade: ";
    cin >> i;
    p1.setIdade(i);

    cout << "Digite o telefone: ";
    cin >> t;
    p1.setTelefone(t);

    cout << endl;

    cout << "Nome: " << p1.getNome() << endl;
    cout << "Idade: " << p1.getIdade() << endl;
    cout << "Telefone: " << p1.getTelefone() << endl;

    return 0;
}
