#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio relogio1 = Relogio();

    int h, m, s, maximo;

    cout << "Digite a hora:";
    cin >> h;

    cout << "Digite o minuto:";
    cin >> m;

    cout << "Digite o segundo:";
    cin >> s;
    cout << endl;

    cout << "Quantos segundos irao passar?";
    cin >> maximo;
    cout << endl;

    relogio1.setHorario(h, m, s);

    while (maximo){
        relogio1.avancarHorario();
        maximo--;
    }

        cout << relogio1.getHora() << ":" << relogio1.getMinuto() << ":" << relogio1.getSegundo() << endl;

    return 0;
}
