
#include <iostream>
#include "lib.h"
using namespace std;

char conversione (char z) {
    char ris;
    if (z>='a' && z<='z') {
            ris = z-32;
        } else if (z>='A' && z<='Z') {
            ris = z+32;
        } else {
    }
    return ris;
}
