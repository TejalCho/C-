/ *   Created a Binary Search tree, print the tree using inorder traversal

* /

#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* Newnode(Node* newnode, int data){
    newnode = new Node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
}

int heightofTree(Node *newnode){
    if(newnode == NULL){
        return 0;
    }

    int lheight = heightofTree(newnode->left);
    int rheight = heightofTree(newnode->right);

    if(lheight > rheight){
        return(lheight + 1);
    }
    else{
        return(rheight + 1);
    }
}

int main(){
    Node* root = NULL;
    root = Newnode(root, 10);
    root->left = Newnode(root,3);
    root->left->left = Newnode(root,2);
    root->left->right = Newnode(root,6);
    root->left->right->right = Newnode(root,4);
    root->left->right->right->left = Newnode(root,8);
    root->right = Newnode(root,9);
    root->right->right = Newnode(root,18);
    root->right->right->left= Newnode(root,12);
    root->right->right->right = Newnode(root,16);
    root->right->right->right->right = Newnode(root,14);
    root->right->right->right->right->right = Newnode(root,20);
    root->right->right->right->right->right->right = Newnode(root,22);
        
    int maxheight = heightofTree(root);
    cout << "Height of the tree is - "<<maxheight<<endl;
    return 0;
}
