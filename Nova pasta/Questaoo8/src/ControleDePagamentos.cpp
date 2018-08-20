#include "ControleDePagamentos.h"

using namespace std;

void ControleDePagamentos::setPagamentos(string n, double v){

    static int aux = 0;

    pagamentos[aux].setValorPagamento(v);
    pagamentos[aux].setNomeDoFuncionario(n);

    aux++;
}

double ControleDePagamentos::calculaTotalDePagamentos(){

    double valor = 0;

    for (int i = 0; i < 50; i++){

        valor+=pagamentos[i].getValorPagamento();

    }

    return valor;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string n){

	for(int i = 0; i < 50; i++){

		if(pagamentos[i].getNomeDoFuncionario().compare(n) == 0)
			return true;
	}

	return false;
}

