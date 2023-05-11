#include<iostream>
#include<vector>
#include<queue>
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
levelordertraversal( node* root)
{
    int flag=0;
    vector<int>v1;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    node* temp=NULL;
    while(1)
    {
        if(q.front()==NULL)
        break;
        while(q.front()!=NULL)
       { temp=q.front(); 
        v1.push_back(temp->value);
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
        // q.pop();
        q.pop();
        }
        if(flag==0)
        {
            for(int i=v1.size()-1;i>=0;i--)
           {
            cout<<v1[i]<<" "; 
            // v.push_back(v1[i]);
           }
            flag=1;
        }
        else if(flag==1)
        {
            for(int i=0;i<v1.size();i++)
           {
            cout<<v1[i]<<" "; 
            // v.push_back(v1[i]);
            }
            flag=0;
        }
        q.pop();
        q.push(NULL);
        v1.clear();
    }

}
int main()
{
    // vector<int>v;
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // cout<<root->left->height();
    levelordertraversal(root);
    // for(auto i : v)
    // {
    //     cout<<i<<" ";
    // }
    return 0;
}