//traversL
#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *left;
    struct node *right;
};
struct node* MakeNode(char x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
    return p;
} 
void PreOrderTraversal(struct node *t){
    if(t!=NULL){
        printf("%c ",t->data);
        PreOrderTraversal(t->left);
        PreOrderTraversal(t->right);
    }
}
void InOrderTraversal(struct node *t){
    if(t!=NULL){
        InOrderTraversal(t->left);
        printf("%c ",t->data);
        InOrderTraversal(t->right);
    }
}
void PostOrderTraversal(struct node *t){
    if(t!=NULL){
        PostOrderTraversal(t->left);
        PostOrderTraversal(t->right);
        printf("%c ",t->data);
    }
}
int main(){
    struct node *root=NULL;
    root=MakeNode('A');
    root->left=MakeNode('B');
    root->right=MakeNode('C');
    root->left->left=MakeNode('D');
    root->right->left=MakeNode('E');
    root->right->right=MakeNode('F');
    root->right->left->left=MakeNode('G');
    root->right->left->left->right=MakeNode('H');
    printf("\n Pre order...-> ");
    PreOrderTraversal(root);
    printf("\n In order...-> ");
    InOrderTraversal(root);
    printf("\n Post order...-> ");
    PostOrderTraversal(root);
    return 0;b  
}