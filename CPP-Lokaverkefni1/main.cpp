#include <iostream>
#include <string>
#include "klasar.h"

using namespace std;

// Constructorar

// Gagnlegar aðferðir til að skoða bókanir

int Bokanir::getId() {
    return this -> bokunId;
};

int Bokanir::getFjoldi() {
    return this -> fjoldi;
};

// Destructorar

Hjolaferd::~Hjolaferd() {
    delete head;
};

Gonguferd::~Gonguferd() {
    delete head;
};

Skidaferd::~Skidaferd() {
    delete head;
};

Node::~Node() {
    delete next;
};

//Bókunarferli

void Hjolaferd::bokaFerd(int bokunId, int fjoldi) {
    if(head == nullptr) {
        head = new Node(bokunId, fjoldi);
        } else {
            Node *nyttStak = new Node(bokunId, fjoldi);
            nyttStak->next = head;
            head = nyttStak;
        }
};

void Gonguferd::bokaFerd(int bokunId, int fjoldi) {
    if(head == nullptr) {
        head = new Node(bokunId, fjoldi);
        } else {
            Node *nyttStak = new Node(bokunId, fjoldi);
            nyttStak->next = head;
            head = nyttStak;
        }
};

void Skidaferd::bokaFerd(int bokunId, int fjoldi) {
    if(head == nullptr) {
        head = new Node(bokunId, fjoldi);
        } else {
            Node *nyttStak = new Node(bokunId, fjoldi);
            nyttStak->next = head;
            head = nyttStak;
        }
};

// Eyða bókun

// Reikna fyrir samanburð -bara fyrir gonguferd

int Gonguferd::getLengd() const {
    return this -> lengd;
};

int Gonguferd::getMax() const {
    return this -> maxFjoldi;
};

int Gonguferd::reikna() const {
    return this -> getLengd() * this -> getMax();
};

// Prenta uppl um bókun

void Hjolaferd::prenta() {
    cout << "Bókunarupplýsingar fyrir ferð " << this -> id << " Max fjöldi " << this -> maxFjoldi << ":" << endl;
    int lausplass = this -> maxFjoldi;

    Node *i;
    for (i = head; i != nullptr; i = i -> next) {
        cout << "Bókunarnúmer: " << i -> bokun.getId() << ", Fjöldi einstaklinga: " << i -> bokun.getFjoldi() <<endl;
        
        lausplass -= i -> bokun.getFjoldi();
    }
    cout << "Laus pláss í ferð: " << lausplass << endl;
};

void Gonguferd::prenta() {
    cout << "Bókunarupplýsingar fyrir ferð " << this -> id << " Max fjöldi " << this -> maxFjoldi << ":" << endl;
    int lausplass = this -> maxFjoldi;

    Node *i;
    for (i = head; i != nullptr; i = i -> next) {
        cout << "Bókunarnúmer: " << i -> bokun.getId() << ", Fjöldi einstaklinga: " << i -> bokun.getFjoldi() <<endl;
        
        lausplass -= i -> bokun.getFjoldi();
    }
    cout << "Laus pláss í ferð: " << lausplass << endl;
};

void Skidaferd::prenta() {
    cout << "Bókunarupplýsingar fyrir ferð " << this -> id << " Max fjöldi " << this -> maxFjoldi << ":" << endl;
    int lausplass = this -> maxFjoldi;

    Node *i;
    for (i = head; i != nullptr; i = i -> next) {
        cout << "Bókunarnúmer: " << i -> bokun.getId() << ", Fjöldi einstaklinga: " << i -> bokun.getFjoldi() <<endl;
        
        lausplass -= i -> bokun.getFjoldi();
    }
    cout << "Laus pláss í ferð: " << lausplass << endl;
};

bool operator > (const Gonguferd& g1, const Gonguferd& g2) {
    return  g1.reikna() > g2.reikna();
};

int main() {
    Hjolaferd h1 = Hjolaferd(101, 2, 50);

    h1.bokaFerd(1, 2);
    h1.bokaFerd(2, 2);
    h1.bokaFerd(3, 2);

    h1.prenta();

    Gonguferd g1 = Gonguferd(201, 3, 40);
    Gonguferd g2 = Gonguferd(201, 4, 50);

    g1.bokaFerd(1, 3);
    g1.bokaFerd(2, 4);
    g1.bokaFerd(3, 3);

    g1.prenta();

    // Er g1 betri en g2?
    if (g1 > g2) {
        cout << "g1 er betri en g2" << endl;
    } else {
        cout << "g1 er ekki betri en g2" << endl;
    }

    return 0;
};