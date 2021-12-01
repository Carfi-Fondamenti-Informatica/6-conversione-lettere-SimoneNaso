
#include <iostream>
#include "lib.h"
using namespace std;

int main () {
    char input;
    cin >> input;
    if (conversione(input)==false) {
        cout << "errore" << endl;
    } else {
        cout << input << endl;
    }
    return 0;
}
