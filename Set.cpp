//
// Created by x on 08.04.2022.
//
#include <iostream>
#include "Set.h"

int Set::getCurrentSize() {
    return currentSize;
}

bool Set::isUnique(int value) {
    if (head == nullptr) return true;
    while (head != nullptr) {
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
        newNode->next = head;
        head = newNode;
    }
    std::cout << "Element: " << value << " has been added to set\n";
    this->increment();
};

Node *Set::findByValue(int value) {
    while (head != nullptr) {
        if (head->value == value) return head;
        head = head->next;
    }
}

void Set::removeFromSet(int value) {
    Node *temp = head;
    Node *nodeToRemove = findByValue(value);

    //dokonczyc, warunek jesli pusty, jesli jeden element

    while (temp->next->value != nodeToRemove->value) {
        temp = head->next;
    }

    temp->next = nodeToRemove->next;
    delete nodeToRemove;
}

void Set::print(Node *node) {
    if (getCurrentSize() == 0) {
        std::cout << "Set is empty\n";
        return;
    }

    while (head != nullptr) {
        std::cout << head << std::endl;
        head = head->next;
    }

}