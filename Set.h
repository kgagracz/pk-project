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
    Node *head;

    Set() : head(nullptr), currentSize(0) {};

    ~Set() {};

    //getters
    int getCurrentSize() const;

    //setters
    bool isUnique(int value) const;

    void increment();

    //list methods
    void addToSet(int value);

    Node *findByValue(int value) const;

    void removeFromSet(int value);

    void print() const;


};


#endif //PROJEKT_SET_H
