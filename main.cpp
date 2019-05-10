#include <iostream>
#include <string>
#include "listi.h"

using namespace std;

int main() {

    BokunarListi f1;

    f1.bokaGongu(101, 200, 201, 500, 50);
    f1.bokaHjola(102, 300, 202, 300, 30);
    f1.bokaSkida(103, 400, 203, 150, 50);

    // Taka frá pláss í ferð
    f1.panta(102, 25);
    f1.panta(103, 50);

    cout << "Prenta ákveðna bókun:" << endl;
    f1.prentaBokun(101);
    cout << endl;

    cout << "Prenta allar bókanir:" << endl;
    f1.prentaAllar();
    cout << endl;

    cout << "Eyða ákveðinni bókun" << endl;
    f1.eydaBokun(101);

    // Hætta við ákv mörg pláss
    f1.eydaPontun(103, 10);
    f1.prentaAllar();
    cout << endl;

    cout << "Bera saman ferðir:" << endl;
    f1.beraSaman(102, 103);
    
    return 0;

};