#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    public:

        Relogio();
        int getHora();
        int getMinuto();
        int getSegundo();
        void setHorario(int h, int m, int s);
        void avancarHorario();

    private:

        int hora;
        int minuto;
        int segundo;

};

#endif // RELOGIO_H
