#ifndef KLASAR_H
#define KLASAR_H

class Bokanir {
    protected:
        int id;
        int maxFjoldi;
        int fratekin;

    public:
        Bokanir() : id(0), maxFjoldi(0), fratekin(0){}
        Bokanir(int id, int maxFjoldi, int fratekin = 0);
        bool nyFerd(int id, int maxFjoldi);
        bool eydaFerd(int id);
        bool takaFra(int fjoldiManns);
        bool haettaVid(int fjoldiManns);
        int stadaFerdar();
        void prenta();
        int getId() {return id;}
        int reikna() const;
        friend bool operator > (const Bokanir& ferd1, const Bokanir& ferd2);
};

class Hjolaferd : public Bokanir {
    private:
        int id;
        int maxFjoldi;
        int fratekin;

    public:
        Hjolaferd(int id, int maxFjoldi, int fratekin);
};

class Gonguferd : public Bokanir {
    private:
        int id;
        int maxFjoldi;
        int fratekin;

    public:
        Gonguferd(int id, int maxFjoldi, int fratekin);
};

class Skidaferd : public Bokanir {
    private:
        int id;
        int maxFjoldi;
        int fratekin;

    public:
        Skidaferd(int id, int maxFjoldi, int fratekin);
};

#endif