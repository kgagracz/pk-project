//
// Created by x on 08.04.2022.
//
#include <iostream>
#include "Set.h"

int Set::getCurrentSize() {
    return this->currentSize;
}

bool Set::isUnique(int value) {
    while(this->head != nullptr) {
        if (this->head->value == value) {
            return false;
        } else {
            return true;
        }
        this->head = this->head->next;
    }
}

void Set::addToSet(Node *head, int value) {
    Node *newNode = new Node(value);

    if (!this->isUnique(value)) {
        std::cout << "Element is already on list\n";
        return;
    }

    if (this->getCurrentSize() == 0) {
        this->head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }

    this->increment();
};