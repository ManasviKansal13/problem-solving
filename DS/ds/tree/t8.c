//lowest common ancestor in binary tree
//diamter of binary tree
//Maximum path sum
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
int Max(int a,int b){
    if(a>=b)
        return a;
    else    
        return b;
}
int NewHeight(struct node *t){
    if(t==NULL)
        return 0;
    else{
        if(t->left==NULL && t->right==NULL)
            return 1;
        else
            return Max(NewHeight(t->left),NewHeight(t->right))+1;
    }
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
struct node *LCA(struct node *T,int x,int y){
    struct node *L,*R;
    if(T==NULL)
        return NULL;
    else{
        if(T->data==x || T->data==y)
            return T;
        else{
            L=LCA(T->left,x,y);
            R=LCA(T->right,x,y);
            if(L==NULL)
                return R;
            else{
                if(R==NULL)
                    return L;
                else
                    return T;
            }
        }
    }
}
int Diameter(struct node *t){
    int D1,DLeft,DRight,M;
    if(t==NULL)
        return 0;
    else{
        D1=NewHeight(t->left)+NewHeight(t->right)+1;
        DLeft=Diameter(t->left);
        DRight=Diameter(t->right);
        M=Max(D1,Max(DLeft,DRight));
        return M;
    }
}
int MPS(struct node *t){
    int M;
    if(t==NULL)
        return 0;
    else{
        if(t->left==NULL && t->right==NULL)
            return t->data;
        else{
            M=Max(MPS(t->left),MPS(t->right));
            return t->data+M;
        }
    }
}
void main(){
    struct node *root=NULL,*L;
    int x,a,b;
    printf("Enter the data of  root node: ");
    scanf("%d",&x);
    root=MakeNode(x);
    CreateTree(&root);
    printf("The LCA to be found of:\t");
    scanf("%d %d",&a,&b);
    L=LCA(root,a,b);
    printf("%d is the Least Common Ancestor of %d & %d.\n",L->data,a,b);
    printf("Diameter of the binary tree is %d.\n",Diameter(root));
    printf("Maximum Path Sum of the binary tree is %d.\n",MPS(root));
}