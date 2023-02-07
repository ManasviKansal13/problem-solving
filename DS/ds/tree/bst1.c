//binary search tree insertn inorder
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* MakeNode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
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
int main(){
    struct node *root=NULL;
    BSTInsert(&root,100);
    BSTInsert(&root,150);
    BSTInsert(&root,120);
    BSTInsert(&root,190);
    BSTInsert(&root,50);
    BSTInsert(&root,70);
    BSTInsert(&root,290);
    printf("\nThe minimum root is: ");
    Min(root);
    printf("\nThe maximum root is: ");
    Max(root);
    printf("\nInorer traversl is : ");
    InOrderTraversal(root);
    printf("\npresorer traversl is : ");
    PreOrderTraversal(root);
    return 0;
}