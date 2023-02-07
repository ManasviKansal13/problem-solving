//count nodes
//count n0,n1,n2
//height
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
int CountNode(struct node *t){
    if(t==NULL)
        return 0;
    else
        return 1+CountNode(t->left)+CountNode(t->right);
}
int CountLeaf(struct node *t){
    if(t==NULL)
        return 0;
    else{
        if(t->left==NULL && t->right==NULL)
            return 1;
        else 
            return CountLeaf(t->left)+CountLeaf(t->right);
    }
}
int CountN2(struct node *t){
    if(t==NULL)
        return 0;
        else{
            if(t->left!=NULL && t->right!=NULL)
                return 1+CountN2(t->left)+CountN2(t->right);
            else
                return CountN2(t->left)+CountN2(t->right);
        }
}
int CountN1(struct node *t){
    if(t==NULL)
        return 0;
    else{
        if(t->left==NULL && t->right==NULL)
            return 0;
        else{
            if(t->left!=NULL && t->right!=NULL)
                return CountN1(t->left)+CountN1(t->right);
            else
                return 1+CountN1(t->left)+CountN1(t->right);
        } 
    }
}
// int SumNodes(struct node *t){
    
// }
int Max(int a,int b){
    if(a>=b)
        return a;
    else    
        return b;
}
int Height(struct node *t){
    if(t==NULL)
        return 0;
    else{
        if(t->left==NULL && t->right==NULL)
            return 0;
        else
            return Max(Height(t->left),Height(t->right))+1;
    }
}
void main(){
    struct node *root=NULL;
    int x,k;
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
    printf("\n%d",CountNode(root));
    printf("\n%d",CountLeaf(root));
    printf("\n%d",CountN1(root));
    printf("\n%d",CountN2(root));
    printf("\n%d",Height(root));
    printf("\n%d",SumNodes(root));
}