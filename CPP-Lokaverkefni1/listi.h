#ifndef LISTI_H
#define LISTI_H

#include "klasar.h"

class Bokanir {
    private:
        int bokunId;
        int fjoldi;
    
    public:
        Bokanir() : bokunId(0), fjoldi(0){}
        Bokanir(int bokunId, int fjoldi){
            this -> bokunId = bokunId;
            this -> fjoldi = fjoldi;
        }
        
        int getId();

        int getFjoldi();

};

class Node {
    public:
        Bokanir bokun;
        Node *next;
        Node(int bokunId, int fjoldi) {
            bokun = Bokanir(bokunId, fjoldi);
            next = nullptr;
        }

        ~Node();
};

#endif