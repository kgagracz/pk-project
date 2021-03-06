//
// Created by x on 08.04.2022.
//
#include <iostream>
#include "Set.h"

Set::~Set() {
    Node* onHand = head;
    Node* temp = head;
    while (onHand->next != nullptr) {
        onHand = onHand->next;
        delete temp;
        temp = onHand;
    }
    delete onHand;
}

int Set::getCurrentSize() const {
    return currentSize;
}

bool Set::isUnique(int value) const {
    if (head == nullptr) return true;
    Node *iterator = head;
    while (iterator != nullptr) {
        if (iterator->value == value) return false;
        else {
            iterator = iterator->next;
        }
    }
    return true;
}

void Set::increment() {
    currentSize++;
}

void Set::addToSet(int value) {
    Node *newNode = new Node(value);

    if (!isUnique(value)) {
        std::cout << "Element " << value << " is already in the set\n";
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

Node *Set::findByValue(int value) const {
    Node *iterator = head;
    while (iterator != nullptr) {
        if (iterator->value == value) return iterator;
        iterator = iterator->next;
    }

    return nullptr;
}

void Set::removeFromSet(int val) {

    if (getCurrentSize() == 0) return;
    Node *temp = head;
    Node *nodeToRemove = findByValue(val);
    if (getCurrentSize() == 1 && head->value == val) {
        delete head;
        head = nullptr;
    } else {
        std::cout << "Cannot find element: " << val << std::endl;
        return;
    }

    if (nodeToRemove == nullptr) {
        std::cout << "Cannot find element: " << val << std::endl;
        return;
    }
    while (temp != nullptr) {
        if (temp->next == nodeToRemove) break;
        temp = temp->next;
    }


    std::cout << "Element: " << *(nodeToRemove) << " has been removed from set\n";
    delete nodeToRemove;

}

void Set::print() const {
    if (getCurrentSize() == 0) {
        std::cout << "Set is empty\n";
        return;
    }
    Node *iterator = head;
    std::cout << "[ ";
    while (iterator != nullptr) {
        std::cout << *(iterator) << ", ";
        iterator = iterator->next;
    }
    std::cout << " ]" << std::endl;
}
