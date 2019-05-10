#include <iostream>
#include <string>
#include "klasar.h"

using namespace std;

// Constructorar

Bokanir::Bokanir(int id, int maxFjoldi, int fratekin) {
    this-> id = id;
    this-> maxFjoldi = maxFjoldi;
    this-> fratekin = fratekin;
};

Hjolaferd::Hjolaferd(int id, int maxFjoldi, int fratekin) : Bokanir(id, maxFjoldi, fratekin) {}

Gonguferd::Gonguferd(int id, int maxFjoldi, int fratekin) : Bokanir(id, maxFjoldi, fratekin) {}

Skidaferd::Skidaferd(int id, int maxFjoldi, int fratekin) : Bokanir(id, maxFjoldi, fratekin) {}

// Base class aðferðir

int Bokanir::reikna() const{
    return this-> maxFjoldi - this-> fratekin;
};

bool Bokanir::nyFerd(int id, int maxFjoldi) {
    if (id > 0) {
        this-> id = id;
        this-> maxFjoldi = maxFjoldi;
        this-> fratekin = 0;
        return true;
    }
    return false;
};

bool Bokanir::eydaFerd(int id) {
    if (this-> id == id) {
        this-> id = 0;
        this-> maxFjoldi = 0;
        this-> fratekin = 0;
        return true;
    }
    return false;
};

int Bokanir::stadaFerdar() {
    if (maxFjoldi > 0) {
        return 100 * fratekin / maxFjoldi;
    } else {
        return 0;
    }
};

bool Bokanir::takaFra(int fjoldiManns) {
    fratekin += fjoldiManns;
    if (stadaFerdar() > 105) {
        fratekin -= fjoldiManns;
        return false;
    }
    return true;
};

bool Bokanir::haettaVid(int fjoldiManns) {
    if ((fratekin - fjoldiManns) < 0) {
        return false;
    }
    fratekin -= fjoldiManns;
    return true;
};

void Bokanir::prenta() {
    cout << "Númer ferðar: " << id << " Frátekin pláss: " << fratekin << " Max fjöldi: " << maxFjoldi << endl;
};

bool operator > (const Bokanir& g1, const Bokanir& h1) {
    return  g1.reikna() > h1.reikna();
};
