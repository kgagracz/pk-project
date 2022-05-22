//
// Created by x on 08.04.2022.
//

#include "Node.h"

Node &Node::operator+(const Node &node) {
    Node *result = new Node(this->value + node.value);
    return *result;
};

Node &Node::operator-(const Node &node) {
    Node *result = new Node(this->value - node.value);
    return *result;
};

Node &Node::operator*(const Node &node) noexcept {
    Node *result = new Node(this->value * node.value);
    return *result;
};
