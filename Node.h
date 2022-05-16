//
// Created by x on 08.04.2022.
//

#ifndef PROJEKT_NODE_H
#define PROJEKT_NODE_H


#include <ostream>

class Node {
public:
    int value;
    Node *next;

    Node(int value) : value(value), next(nullptr) {};


    friend std::ostream &operator<<(std::ostream &out, Node &node) {
        out << node.value;
        return out;
    }

    Node &operator+(const Node &node);

    Node &operator-(const Node &node);

    Node &operator+=(const Node &node);

    Node &operator-=(const Node &node);

    Node &operator*(const Node &node) noexcept;

    Node &operator/(const Node &node);

    Node &operator*=(const Node &node);

    Node &operator/=(const Node &node);

    bool operator>(const Node &second);

    bool operator<(const Node &second);
};


#endif //PROJEKT_NODE_H
