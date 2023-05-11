#include<iostream>
using namespace std;
class node
{
public:
int value;
node* left;
node* right;
node(int v)
{

value=v;
left=NULL;
right=NULL;
}
};
node* Search(node *root,int v)
{
    if(root==NULL)
    {
       return NULL;
    }
    else if(root->value==v)
    {
    return root;
    }
    else if((root->value>v))
    {
        
        Search(root->left,v);
    }
    else 
    { 
        Search(root->right,v);
    }
}
int main()
{
// creation of Binary search tree;
node* root=new node(25);
root->left=new node(15);
root->left->left=new node(10);
root->left->right=new node(18);
root->left->right->left=new node(16);
root->right=new node(40);
root->right->left=new node(30);
root->right->right=new node(60);
root->right->right->left=new node(50);
root->right->right->right=new node(70);
root->right->right->right->left=new node(65);
cout<<Search(root,16)->value<<" ";

}