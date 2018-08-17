#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

using namespace std;

class ControleDePagamentos
{
    public:

        void setPagamentos(pagamento p);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string n);

    private:

        Pagamento pagamentos[50];

};

#endif // CONTROLEDEPAGAMENTOS_H
