#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class node
{
    public:
    // int static n;
    int value;
    node* left;
    node* right;

    node(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }
    void inorder()
    {
        static int n=0;
        if(n==0)
        cin>>n;
      
        if(this!=NULL)
       { 
        this->left->inorder();
        if(n!=0)
       { 
        cout<<this->value<<" ";
        n--;
        if(n==0)
        exit(0);
       }
        this->right->inorder();
        }
    }
};
//  int node ::n=3;
int main()
{
   
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // int n;
    // cin>>n;
    root->inorder();
    return 0;
}