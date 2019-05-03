#ifndef KLASAR_H
#define KLASAR_H

#include "listi.h"

using namespace std;



class Hjolaferd {
    private:
        int id;
        int lengd;
        int maxFjoldi;
        Node *head;

    public:
        Hjolaferd(int hId, int hLengd, int hMaxFjoldi) {
            id = hId;
            lengd = hLengd;
            maxFjoldi = hMaxFjoldi;
            head = nullptr;
        };

        Hjolaferd(){
            head = nullptr;
        };

        ~Hjolaferd();

        void bokaFerd(int bokunId, int fjoldi);

        void eydaFerd(int bokunId);
        
        void prenta();

        
        
};

class Gonguferd {
    private:
        int id;
        int lengd;
        int maxFjoldi;
        Node *head;

    public:
        friend bool operator > (const Gonguferd& ferd1, const Gonguferd& ferd2);
        Gonguferd(int gId, int gLengd, int gMaxFjoldi) {
            id = gId;
            lengd = gLengd;
            maxFjoldi = gMaxFjoldi;
            head = nullptr;
        };

        Gonguferd(){
            head = nullptr;
        };

        ~Gonguferd();
        
        void bokaFerd(int bokunId, int fjoldi);

        void eydaFerd(int bokunId);

        int reikna() const;

        int getLengd() const;

        int getMax() const;

        void prenta();
        
};

class Skidaferd {
    private:
        int id;
        int lengd;
        int maxFjoldi;
        Node *head;

    public:
        Skidaferd(int sId, int sLengd, int sMaxFjoldi) {
            id = sId;
            lengd = sLengd;
            maxFjoldi = sMaxFjoldi;
            head = nullptr;
        };

        Skidaferd(){
            head = nullptr;
        };

        ~Skidaferd();

        void bokaFerd(int bokunId, int fjoldi);

        void eydaFerd(int eydaId);
        
        void prenta();
        
};

#endif