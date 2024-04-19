#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int mx=0;

int maxHeight(Node *root){
    if(root==NULL) return 0;
    int l=maxHeight(root->left);
    int r=maxHeight(root->right);
    int d=l+r;
    mx=max(mx,d);
    return max(l,r)+1;
};

int diameterOfBinaryTree(Node *root){
    mx=0;
    int h= maxHeight(root);
    return mx;
};

int main()
{

    return 0;
}
