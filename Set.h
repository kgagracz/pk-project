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

    Set(): head(nullptr), currentSize(0) {};

    //getters
    int getCurrentSize();

    //setters
    bool isUnique(int value);
    void increment();

    //list methods
    void addToSet(int value);
    void print();
};


#endif //PROJEKT_SET_H
