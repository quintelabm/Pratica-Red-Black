#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *parent;
    Node *left;
    Node *right;
    int color;
};

#endif