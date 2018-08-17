#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:

        Televisao();
        int getCanal();
        int getVolume();
        void aumentarVolume();
        void diminuirVolume();
        void aumentarCanal();
        void diminuirCanal();
        void setCanal(int c);
        void setVolume(int v);

    private:

        int volume;
        int canal;
};

#endif // TELEVISAO_H
