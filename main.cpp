#include <iostream>
#include "Set.h"
#include "Node.h"

int main() {
    Set *set = new Set();

    for (int i = 0; i < 30; ++i) {
        set->addToSet(i);
    }

    std::cout << "Curent set size: " << set->getCurrentSize() << std::endl;
    set->addToSet(2);
    set->print();
    set->removeFromSet(2);
    set->print();
    set->addToSet(2);
    set->print();
    std::cout << *(set->head) + *(set->head) << std::endl;
    std::cout << *(set->head) - *(set->head) << std::endl;
    std::cout << *(set->head) * *(set->head) << std::endl;
    delete set;

    return 0;
}
