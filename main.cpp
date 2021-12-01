
#include <iostream>
#include "lib.h"
using namespace std;

int main () {
    char c=0;
    cin >> c;
    if ((c>='a' && c<='z') or (c>='A' && c<='Z')) {
        cout << "vero" << endl;
        cout << conversione (c) << endl;
    } else {
        cout << "falso" << endl;
        cout << "errore" << endl;
    }
    return 0;
}
