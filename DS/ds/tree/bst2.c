//succesor & preecessor
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
struct node* MakeNode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
    p->father=NULL;
    return p;
}
struct node *BSTInsert(struct node **T,int x){
    struct node *p,*q;
    p=*T;
    q=NULL;
    if(*T==NULL)
       *T= MakeNode(x);
    else{
        while(p!=NULL){
            q=p;
            if(x<(p->data))
                p=p->left;
            else
                p=p->right;
        }
        if(x<(q->data))
            q->left=MakeNode(x);
        else
            q->right=MakeNode(x);
    }
}
struct node *BSTSearch(struct node *t,int key){
    while(t!=NULL){
        if(t->data==key)
            return t;
        else{
            if(key<t->data)
                t=t->left;
            else
                t=t->right;
        }
    }
    return NULL;
}
void PreOrderTraversal(struct node *t){
    if(t!=NULL){
        printf("%d\t",t->data);
        PreOrderTraversal(t->left);
        PreOrderTraversal(t->right);
    }
}
void InOrderTraversal(struct node *t){
    if(t!=NULL){
        InOrderTraversal(t->left);
        printf("%d\t",t->data);
        InOrderTraversal(t->right);
    }
}
struct node *Min(struct node *t){
    while(t->left!=NULL)
        t=t->left;
    return t;
}
struct node *Max(struct node *t){
    while(t->right!=NULL)
        t=t->right;
    return t;
}
struct node *BSTSuccessor(struct node *p){
    struct node *q;
    if(p->right!=NULL)
        Min(p->right);
    else{
        q=p->father;
        while(q!=NULL && q->right==p){
            p=q;
            q=q->father;
        }
        return q;
    }
}
struct node *BSTPredessor(struct node *p){
    struct node *q;
    if(p->left!=NULL)
        Max(p->right);
    else{
        q=p->father;
        while(q!=NULL && q->left==p){
            p=q;
            q=q->father;
        }
        return q;
    }
}
int main(){
    struct node *root=NULL;
    BSTInsert(&root,100);
    BSTInsert(&root,150);
    BSTInsert(&root,120);
    BSTInsert(&root,190);
    BSTInsert(&root,50);
    BSTInsert(&root,70);
    BSTInsert(&root,290);
    BSTSearch(root,150);
    printf("\nThe minimum root is: ");
    Min(root);
    printf("\nThe maximum root is: ");
    Max(root);
    printf("\nInorer traversl is : ");
    InOrderTraversal(root);
    printf("\npresorer traversl is : ");
    PreOrderTraversal(root);
    printf("\nThe succesor of root is: ");
    BSTSuccessor(root);
    printf("\nThe predeesor of root is: ");
    BSTPredessor(root);
    return 0;
}

