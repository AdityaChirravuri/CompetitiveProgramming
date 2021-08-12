#include <bits/stdc++.h>
using namespace std;

struct BSTNode{
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};

typedef struct BSTNode Node;

Node* Newnode(int val)
{   
    Node* temp;
    temp = new Node();
    temp->data = val;
    temp->left = temp->right =NULL;
    return temp;
}

Node* Insert(Node* root, int val)
{
    if(root == NULL){
        return Newnode(val);
    }

    if(val == root->data)return root;
    else if(val > root->data)root->right = Insert(root->right, val);
    else root->left = Insert(root->left, val);

    return root;
}

Node* Find(int val, Node* root)
{
    if(root->data == val)return root;
    else if (root->data > val)return Find(val, root->left);
    else return Find(val, root->right);
}

void Print(Node* root)
{
    if(root == NULL)return;

    cout << root->data << "\n";
    Print(root->left);
    Print(root->right);
}

int main()
{
    int n, temp;
    Node* head = NULL;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        head = Insert(head, temp);
    }
    int val;
    cin >> val;
    Node* f = Find(val, head);
    Print(f);

    return 0;
}
