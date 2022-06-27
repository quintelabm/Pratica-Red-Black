#include <iostream>

using namespace std;

#include "../rb-lib/include/Red-Black-Tree.hpp"

int main() {
    RedBlackTree bst;
    bst.insert(55);
    bst.insert(40);
    bst.insert(65);
    bst.insert(60);
    bst.insert(75);
    bst.insert(57);

    cout << endl
        << "Arvore:" << endl;
    bst.printTree();
    cout << endl
        << "Depois de deletar" << endl;
    bst.deleteNode(40);
    bst.printTree();
    return 0;
}