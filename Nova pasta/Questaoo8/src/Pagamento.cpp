#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento()
{
    nomeDoFuncionario = "";
    valorPagamento = 0;
}

void setValorPagamento(double v){
    valorPagamento = v;
}

void setNomeDoFuncionario(string n){
    nomeDoFuncionario = n;
}

double getValorPagamento(){
    return valorPagamento;
}

string getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

