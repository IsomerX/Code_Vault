#include <bits/stdc++.h>  
 
using namespace std;

struct node{
    int data;
    node *right, *left;
    node(){
        data = 0;
        right = NULL;
        left = NULL;
    }
};

int cnt = 0;
void init(int curr, int h, node* root){
    if(curr == h){
        return;
    }
    cnt++;
    root->left = new node();
    root->right = new node();
    init(curr+1, h, root->left);
    init(curr+1, h, root->right);
    return;
}


void printPostorder(node* root)
{
    if (root == NULL)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
 
    cout << root->data << " ";
}

void printInorder(node* root)
{
    if (root == NULL)
        return;
 
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void enter(node* root){
    if(!root)
        return;
    root->data = cnt;
    cnt--;
    enter(root->right);
    enter(root->left);
}
int main()
{   
    node* head = new node();
    int n = 3;
    init(1, n, head);
    printPostorder(head);
    cout << endl;
    cnt = pow(2, n) - 1;
    enter(head);
    printInorder(head);
    cout << endl << cnt;
    return 0;
}