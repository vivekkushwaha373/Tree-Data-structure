#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node* left;
    node* right;

    node(int v)//constructor is called
    {
        value=v;
        left=NULL;
        right=NULL;
    }
};
node* Max_element(node* root)
{
    if(root==NULL)
    return NULL;
    else if(root->right==NULL)
    return root;
    else
    return Max_element(root->right);
}
int main()
{
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
    node* t=Max_element(root);
    if(t)
    cout<<"Maximum element is: "<<t->value<<" ";
    else
    {
        cout<<"No maximum element; tree is Empty";
    }
    return 0;
}