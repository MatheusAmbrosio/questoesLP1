#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

using namespace std;

class ControleDePagamentos
{
    public:

        void setPagamentos(string n, double v);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string getNomeDoFuncionario);

    private:

        Pagamento pagamentos[50];

};

#endif
