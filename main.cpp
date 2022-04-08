#include <iostream>
#include "Set.h"
#include "Node.h"

int main() {
    Set* set = new Set();
    Node* head = new Node(0);
    set->addToSet(head, 20);

    return 0;
}
