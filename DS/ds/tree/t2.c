//user defined inputs traversL
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
void CreateTree(struct node **t){
    int choice,x;
    struct node *p;
    printf("Whether the left of %d exists?(0/1)",(*t)->data);
    scanf("%d",&choice);
    if(choice==1){
        printf("Input the data of left of %d ",(*t)->data);
        scanf("%d",&x);
        p=MakeNode(x);
        (*t)->left=p;
        CreateTree(&p);
    }
    printf("Whether the right of %d exists?(0/1)",(*t)->data);
    scanf("%d",&choice);
    if(choice==1){
        printf("Input the data of right of %d ",(*t)->data);
        scanf("%d",&x);
        p=MakeNode(x);
        (*t)->right=p;
        CreateTree(&p);
    }
}
void PreOrderTraversal(struct node *t){
    if(t!=NULL){
        printf("%d ",t->data);
        PreOrderTraversal(t->left);
        PreOrderTraversal(t->right);
    }
}
void InOrderTraversal(struct node *t){
    if(t!=NULL){
        InOrderTraversal(t->left);
        printf("%d ",t->data);
        InOrderTraversal(t->right);
    }
}
void PostOrderTraversal(struct node *t){
    if(t!=NULL){
        PostOrderTraversal(t->left);
        PostOrderTraversal(t->right);
        printf("%d ",t->data);
    }
}
void main(){
    struct node *root=NULL;
    int x;
    printf("Enter the data of  root node: ");
    scanf("%d",&x);
    root=MakeNode(x);
    CreateTree(&root);
    printf("\n Pre order...-> ");
    PreOrderTraversal(root);
    printf("\n In order...-> ");
    InOrderTraversal(root);
    printf("\n Post order...-> ");
    PostOrderTraversal(root);
}