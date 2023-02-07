//user defined inputs traversL
#include<stdio.h>
#include<stdlib.h>
struct gnode{
    int data;
    struct gnode *child;
    struct gnode *sibling;  
};
struct gnode* MakegNode(int x){
    struct gnode *p;
    p=(struct gnode*)malloc(sizeof(struct gnode));
    p->child=NULL;
    p->data=x;
    p->sibling=NULL;
    return p;
} 
void CreateTree(struct gnode **t){
    int choice,x;
    struct gnode *p;
    printf("Whether the child of %d exists?(0/1)",(*t)->data);
    scanf("%d",&choice);
    if(choice==1){
        printf("Input the data of child of %d ",(*t)->data);
        scanf("%d",&x);
        p=MakegNode(x);
        (*t)->child=p;
        CreateTree(&p);
    }
    printf("Whether the sibling of %d exists?(0/1)",(*t)->data);
    scanf("%d",&choice);
    if(choice==1){
        printf("Input the data of sibling of %d ",(*t)->data);
        scanf("%d",&x);
        p=MakegNode(x);
        (*t)->sibling=p;
        CreateTree(&p);
    }
}
void PreOrderTraversal(struct gnode *t){
    if(t!=NULL){
        printf("%d ",t->data);
        PreOrderTraversal(t->child);
        PreOrderTraversal(t->sibling);
    }
}
void InOrderTraversal(struct gnode *t){
    if(t!=NULL){
        InOrderTraversal(t->child);
        printf("%d ",t->data);
        InOrderTraversal(t->sibling);
    }
}
void PostOrderTraversal(struct gnode *t){
    if(t!=NULL){
        PostOrderTraversal(t->child);
        PostOrderTraversal(t->sibling);
        printf("%d ",t->data);
    }
}
void main(){
    struct gnode *root=NULL;
    int x;
    printf("Enter the data of root gnode: ");
    scanf("%d",&x);
    root=MakegNode(x);
    CreateTree(&root);
    printf("\n Pre order...-> ");
    PreOrderTraversal(root);
    printf("\n In order...-> ");
    InOrderTraversal(root);
    printf("\n Post order...-> ");
    PostOrderTraversal(root);
}