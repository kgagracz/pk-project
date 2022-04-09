#include <iostream>
#include "Set.h"
#include "Node.h"

int main() {
    Set* set = new Set();

//    for (int i = 0; i < 300; ++i) {
//        set->addToSet(i);
//    }

    std::cout << "Curent set size: " << set->getCurrentSize() << std::endl;

    set->print();

    return 0;
}
