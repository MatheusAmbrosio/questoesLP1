#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento
{
    public:

        Pagamento();
        void setValorPagamento(double v);
        void setNomeDoFuncionario(string n);
        double getValorPagamento();
        string getNomeDoFuncionario();

    private:

        double valorPagamento;
        string nomeDoFuncionario;
};

#endif
