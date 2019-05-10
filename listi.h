#ifndef LISTI_H
#define LISTI_H
#include "hnutur.h"

class BokunarListi {
    private:
        Node *head;
    
    public:
        BokunarListi();
        void nyBokun(int bokunID, int fjoldi, Bokanir bokun);
        void bokaHjola(int bokunID, int fjoldi, int id, int maxFjoldi, int fratekin);
        void bokaGongu(int bokunID, int fjoldi, int id, int maxFjoldi, int fratekin);
        void bokaSkida(int bokunID, int fjoldi, int id, int maxFjoldi, int fratekin);
        bool panta(int bokunID, int fj);
        bool eydaPontun(int bokunID, int fj);
        void eydaBokun(int bokunID);
        void beraSaman(int id1, int id2);
        void prentaBokun(int bokunID);
        void prentaAllar();
};

#endif