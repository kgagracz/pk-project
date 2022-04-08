//
// Created by x on 08.04.2022.
//

#ifndef PROJEKT_SET_H
#define PROJEKT_SET_H

#include "Node.h"

class Set {
private:
    int currentSize;
public:
    Node* head;

    //getters
    int getCurrentSize();

    //setters
    bool isUnique(int value);
    void increment() {
        this->currentSize++;
    }

    //list methods
    void addToSet(Node *head, int value);
};


#endif //PROJEKT_SET_H
