//
// Created by x on 08.04.2022.
//
#include <iostream>
#include "Set.h"

int Set::getCurrentSize() {
    return currentSize;
}

bool Set::isUnique(int value) {
    if(head == nullptr) return true;
    while(head != nullptr) {
        return !(head->value == value);
    }
}

void Set::increment() {
    currentSize++;
}

void Set::addToSet(int value) {
    Node *newNode = new Node(value);

    if (!this->isUnique(value)) {
        std::cout << "Element" << value << "is already in the set\n";
        return;
    }

    if (this->getCurrentSize() == 0) {
        head = newNode;
    } else {
        while(head->next != nullptr) {
            head = head->next;
        }
        head->next = newNode;
    }
    std::cout << "Element: " << value << " has been added to set\n";
    this->increment();
};

void Set::print() {
    if (getCurrentSize() == 0) {
        std::cout << "Set is empty\n";
        return;
    }

    while (head->next != nullptr) {
        std::cout << head->value << std::endl;
    }

}