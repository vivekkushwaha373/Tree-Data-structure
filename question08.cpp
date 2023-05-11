#include<iostream>
#include<vector>
#include<stack>
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
    int height()
    {
        if(this==NULL)
        return 0;
        else
        {
            int h1=this->left->height();
            int h2=this->right->height();
            if(h1>h2)
            return h1+1;
            else
            return h2+1;
        }
    }
};

int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<root->left->height();
    return 0;
}