#include <iostream>
#include <string>
#include "listi.h"

using namespace std;

BokunarListi::BokunarListi() {
    head = nullptr;
};

//Aðferðir fyrir Linked List

void BokunarListi::bokaGongu(int bokunID, int fjoldi, int id, int maxFjoldi, int fratekin) {
    Gonguferd g1 = Gonguferd(id, maxFjoldi, fratekin);
    nyBokun(bokunID, fjoldi, g1);
};

void BokunarListi::bokaHjola(int bokunID, int fjoldi, int id, int maxFjoldi, int fratekin) {
    Hjolaferd h1 = Hjolaferd(id, maxFjoldi, fratekin);
    nyBokun(bokunID, fjoldi, h1);
};

void BokunarListi::bokaSkida(int bokunID, int fjoldi, int id, int maxFjoldi, int fratekin) {
    Skidaferd s1 = Skidaferd(id, maxFjoldi, fratekin);
    nyBokun(bokunID, fjoldi, s1);
};

void BokunarListi::nyBokun(int bokunID, int fjoldi, Bokanir g1) {
    if (head == nullptr) {
        head = new Node(bokunID, fjoldi);
    } else {
        Node *nyttStak = new Node(bokunID, fjoldi);
        nyttStak -> next = head;
        head = nyttStak;
    }
};

void BokunarListi::eydaBokun(int bokunID) {
    Node *current = head;
    if (current && current -> data.getId() == bokunID) {
        delete head;
        head = current -> next;
    } else {
        Node *prev = current;
        while (current -> data.getId() != bokunID) {
            prev = current;
            current = current -> next;
        }
        prev -> next = current -> next;
        delete current;
    }
};

void BokunarListi::prentaBokun(int bokunID) {
    Node *i;
    for (i = head; i != nullptr; i = i -> next) {
        if (i -> data.getId() == bokunID) {
            i -> data.prenta();
        }
    }
};

void BokunarListi::prentaAllar() {
    Node *current = head;
    while (current) {
        current -> data.prenta();
        current = current -> next;
    }
};

// Vissi ekki alveg hvernig ég ætti að notfæra mér operator overloading þannig þetta endaði svona

void BokunarListi::beraSaman(int id1, int id2) {
    Node *i;
    int ferd1;
    int ferd2;

    for (i = head; i != nullptr; i = i -> next) {
        if (i -> data.getId() == id1) {  
            ferd1 = i -> data.reikna();
        }
    }
    for (i = head; i != nullptr; i = i -> next) {
        if (i -> data.getId() == id2) {  
            ferd2 = i -> data.reikna();
        }
    }
    if (ferd1 > ferd2) {
        cout << "Það eru fleirri laus pláss eftir í ferð " << id1 << endl;
    } else {
        cout << "Það eru fleirri laus pláss eftir í ferð " << id2 << endl;
    }
};

bool BokunarListi::panta(int bokunID, int fj) {
    Node *current = head;
    while(current -> data.getId() != bokunID) {
        current = current -> next;
    }
    return current -> data.takaFra(fj);
};

bool BokunarListi::eydaPontun(int bokunID, int fj) {
    Node *current = head;
    while(current -> data.getId() != bokunID) {
        current = current -> next;
    }
    return current -> data.haettaVid(fj);
};