//Level Order Traversal of a binary tree using c++ stl
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
using namespace std;
struct node{
    int Data;
    struct node *Left;
    struct node *Right;
};
struct node* MakeNode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->Left=NULL;
    p->Data=x;
    p->Right=NULL;
    return p;
} 
void CreateTree(struct node **t){
    int choice,x;
    struct node *p;
    cout<<"Whether the left of "<< (*t)->Data <<" exists?(0/1)";
    cin>>choice;
    if(choice==1){
        cout<<"Input the data of left of "<< (*t)->Data<<" ";
        cin>>x;
        p=MakeNode(x);
        (*t)->Left=p;
        CreateTree(&p);
    }
    cout<<"Whether the right of "<<(*t)->Data<<" exists?(0/1) ";
    cin>>choice;
    if(choice==1){
        cout<<"Input the data of right of "<<(*t)->Data<<" ";
        cin>>x;
        p=MakeNode(x);
        (*t)->Right=p;
        CreateTree(&p);
    }
}
void PreOrderTraversal(struct node *t){
    if(t!=NULL){
        cout<<t->Data;
        PreOrderTraversal(t->Left);
        PreOrderTraversal(t->Right);
    }
}
void InOrderTraversal(struct node *t){
    if(t!=NULL){
        InOrderTraversal(t->Left);
        cout<<t->Data;
        InOrderTraversal(t->Right);
    }
}
void PostOrderTraversal(struct node *t){
    if(t!=NULL){
        PostOrderTraversal(t->Left);
        PostOrderTraversal(t->Right);
        cout<<t->Data;
    }
}
void LevelOrderTraversal(struct node *t){
    queue<struct node *>q;
    q.push(t); 
    while(q.size()!=0){
        struct node *x;
        x=q.front();
        q.pop();
        if(x->Left!=NULL)
            q.push(x->Left);
        if(x->Right!=NULL)
            q.push(x->Right);
        cout<<x->Data;
    }
}
int main(){
    struct node *Root=NULL;
    int x;
    cout<<"Enter the data of root node: ";
    cin>>x;
    Root=MakeNode(x);
    CreateTree(&Root);
    cout<<"\n Pre order...-> ";
    PreOrderTraversal(Root);
    cout<<"\n In order...-> ";
    InOrderTraversal(Root);
    cout<<"\n Post order...-> ";
    PostOrderTraversal(Root);
    cout<<"\n Level order...-> ";
    LevelOrderTraversal(Root);
    return 0;
}