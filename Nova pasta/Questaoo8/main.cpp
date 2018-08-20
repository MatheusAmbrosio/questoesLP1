#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{

    double v;
    string n;

    Pagamento p1 = Pagamento();
    Pagamento p2 = Pagamento();

    cout << "Digite o nome: ";
    cin >> n;
    p1.setNomeDoFuncionario(n);
    cout << endl;

    cout << "Digite o valor do pagamento: ";
    cin >> n;
    p1.setValorPagamento(v);
    cout << endl;

    cout << "Digite o nome: ";
    cin >> n;
    p2.setNomeDoFuncionario(n);
    cout << endl;

    cout << "Digite o valor do pagamento: ";
    cin >> n;
    p2.setValorPagamento(v);
    cout << endl;

    ControleDePagamentos cp = ControleDePagamentos();

    cp.setPagamentos(p1.getNomeDoFuncionario(), p1.getValorPagamento());
    cp.setPagamentos(p2.getNomeDoFuncionario(), p2.getValorPagamento());

    cout << "total de pagamentos = " << cp.calculaTotalDePagamentos() << endl;
    cout << "Existe pagamento para \"Denis\" ? " << cp.existePagamentoParaFuncionario("Denis") << endl;

    return 0;
}
