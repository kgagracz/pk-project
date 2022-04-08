//
// Created by x on 08.04.2022.
//

#ifndef PROJEKT_NODE_H
#define PROJEKT_NODE_H


class Node {
public:
    int value;
    Node* next;

    Node(int value): value(value), next(nullptr) {};
};


#endif //PROJEKT_NODE_H
