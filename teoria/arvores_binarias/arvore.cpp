#include <iostream>

using namespace std;

struct Card {
    int number;
    int suit;
}

struct Node {
    Card card;
    Node *left;
    Node *right;
}

Node *insert(Node *root, Card card){
    if(root == NULL){
        Node *node = new Node;
        node->card = card;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    else{
        if(cart.number >= root->card.number){
            return insert(root->right, card);
        }
        else{
            return insert(root->left, card);
        }
    }
}

int main(){

    Node *root = NULL;


    return 0;
}