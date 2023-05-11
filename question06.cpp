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
// int height(node* root)
// {
//   if(root==NULL)
//   return 0;
//   int a=height(root->left);
//   int b=height(root->right);
//   if(a>b)
//   return a+1;
//   else
//   return b+1;
// }

int height(node* root)
{
    if(root==NULL)
    return 0;
    
        int h1=height(root->left);
        int h2=height(root->right);
   
    if(h1>h2)
    return h1+1;
    else
    return h2+1;
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
cout<<"diameter of tree is: "<<height(root->left)+height(root->right)+1; 
  
    return 0;
}