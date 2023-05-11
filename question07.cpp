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
};

void zigzagtraversal(node* root)
{
int flag=0;
vector<int>n;
vector<node*>v;
stack<node*>s;
s.push(root);
while(!s.empty())
{
while(!s.empty())
{
v.push_back(s.top());
s.pop();
}
if(flag==0)
{
    for(int i=0;i<v.size();i++)
    {
        n.push_back(v[i]->value);
        if(v[i]->left!=NULL)
        s.push(v[i]->left);
        if(v[i]->right!=NULL)
        s.push(v[i]->right);

    }
    v.clear();
    flag=1;
}
else if(flag==1)
{
    for(int i=v.size()-1;i>=0;i--)
    {
        n.push_back(v[i]->value);
        if(v[i]->left!=NULL)
        s.push(v[i]->left);
        if(v[i]->right!=NULL)
        s.push(v[i]->right);

    }
    v.clear();
    flag=0;
}
}
for(int i=n.size()-1;i>=0;i--)
{
    cout<<n[i]<<" ";
}
}
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
    zigzagtraversal(root);
    return 0;
}