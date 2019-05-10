#ifndef HNUTUR_H
#define HNUTUR_H
#include "klasar.h"

struct Node {
    Bokanir data;
    Node *next;
    Node(int id, int maxFjoldi) {
        data = Bokanir(id, maxFjoldi);
        next = nullptr;
    }
};

#endif