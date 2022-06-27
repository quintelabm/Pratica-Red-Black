#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H
#include <iostream>
#include "Node.hpp"

using namespace std;

typedef Node *NodePtr;

class RedBlackTree {
    private:
        NodePtr root;
        NodePtr TNULL;

        void leftRotate(NodePtr x);
        void rightRotate(NodePtr x);

        void preOrderHelper(NodePtr node);
        void inOrderHelper(NodePtr node);
        void postOrderHelper(NodePtr node);
        NodePtr searchTreeHelper(NodePtr node, int key);
        void deleteFix(NodePtr x);
        void deleteNodeHelper(NodePtr node, int key);
        void insertFix(NodePtr k);
        void printHelper(NodePtr root, string indent, bool last);
        void initializeNULLNode(NodePtr node, NodePtr parent);
        void rbTransplant(NodePtr u, NodePtr v);
    public:

        RedBlackTree();
       // ~RedBlackTree();

        NodePtr getRoot();

        void preorder();
        void inorder();
        void postorder();
        void insert(int key);
        void deleteNode(int data);
        void printTree();

        NodePtr searchTree(int k);
        NodePtr minimum(NodePtr node);
        NodePtr maximum(NodePtr node);
        NodePtr successor(NodePtr x);
        NodePtr predecessor(NodePtr x);
        
};
#endif