
#include <iostream>
#include "lib.h"
using namespace std;

bool conversione (char &a) {
    if (a>='a' && a<='z') {
            a = a-32;
            return true;
        } else if (a>='A' && a<='Z') {
            a = a+32;
            return true;
        } 
        return false;
}

