#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento()
{
    nomeDoFuncionario = "";
    valorPagamento = 0;
}

void Pagamento::setValorPagamento(double v){
    valorPagamento = v;
}

void Pagamento::setNomeDoFuncionario(string n){
    nomeDoFuncionario = n;
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

