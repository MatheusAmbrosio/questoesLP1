#include <iostream>
#include "Televisao.h"

using namespace std;

int main()
{
    Televisao t1 = Televisao();
    int c, v;
    char comando;

    cout << "digite o canal (entre 1 e 999): ";
    cin >> c;
    t1.setCanal(c);

    cout << "digite o volume (entre 1 e 100): ";
    cin >> v;
    t1.setVolume(v);

    while (1){

        cout << "Canal: " << t1.getCanal() << endl;
        cout << "Volume: " << t1.getVolume() << endl;
        cout << endl;

        cout << "Insira um comando: " << endl;
        cout << "Aumentar canal: w" << endl ;
        cout << "Diminuir canal: s" << endl ;
        cout << "Aumentar volume: d" << endl ;
        cout << "Diminuir volume: a" << endl ;
        cout << "escolhe canal: f" << endl;

        cin >> comando;

        switch (comando){

            case 'w':{
                t1.aumentarCanal();
                break;
            }

            case 's':{
                t1.diminuirCanal();
                break;
            }

            case 'd':{
                t1.aumentarVolume();
                break;
            }

            case 'a':{
                t1.diminuirVolume();
                break;
            }

            case 'f':{
                cout << "Digite o canal desejado (entre 1 e 999): ";
                cin >> c;
                t1.setCanal(c);
                break;
            }

        }

    }

    return 0;
}
