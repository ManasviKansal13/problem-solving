#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
    int height;
};
struct node *makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->father=NULL;
    p->height=0;
    return p;
}
void inorder(struct node **p){
    if((*p)!=NULL){
        inorder(&((*p)->left));
        printf("%d\t",(*p)->data);
        inorder(&((*p)->right));
    }
}
void preorder(struct node **p){
    if((*p)!=NULL){
        printf("%d\t",(*p)->data);
        preorder(&((*p)->left));
        preorder(&((*p)->right));
    }
}
void postorder(struct node **p){
    if((*p)!=NULL){
        postorder(&((*p)->left));
        postorder(&((*p)->right));
        printf("%d\t",(*p)->data);
    }
}

int Isleft(struct node *p){
    if(p->father->left==p)
        return 1;
    else
        return 0;
}
int IsRight(struct node *p){
    if(p->father->right==p)
        return 1;
    else
        return 0;
}
struct node *sibling(struct node*p){
    if (Isleft(p))
        return p->father->right;
    else
        return p->father->left;
}
void BSTInsert(struct node **r,int x){
    struct node *p,*q;
    p=*r;
    q=NULL;
    if(p==NULL)
        (*r)=makenode(x);
    else{
        while((p)!=NULL){
            if(x<p->data){
                q=p;
                p=p->left;
            }
            else{
                q=p;
                p=p->right;
         }
        }
        if(x<q->data){
            q->left=makenode(x);
            q->left->father=q;
        }
        else{
            q->right=makenode(x);
            q->right->father=q;
        }
    }
}
struct node *BSTSearch(struct node **root,int key){
    struct node *p;
    p=(*root);
    while(p!=NULL){
        if(p->data==key)
            return(p);
        else{
            if(key<p->data)
                p=p->left;
            else
                p=p->right;
        }
    }
    return NULL;
}
struct node *mini(struct node **root){
    struct node *p;
    p=(*root);
    while(p->left!=NULL)
        p=(p)->left;
    return p;
}
struct node *maxe(struct node **root){
    struct node *p;
    p=(*root);
    while(p->right!=NULL)
        p=(p)->right;
    //printf("%d",p->data);
    return (p);
}
struct node *BSTSuccessor(struct node *root){
    struct node *p,*q;
    q=NULL;
    p=root;
    if(p->right!=NULL){
            q=mini(&(p->right));
            return q;
        }
    else{
        q=p->father;
        while ((q!=NULL) && (q->right==p)){
            p=q;
            q=q->father;
        }
    }
    return q;
}
struct node *BSTPredecessor(struct node *root){
    struct node *p,*q;
    q=NULL;
    p=root;
    if(p->left!=NULL){
            q=maxe(&(p->right));
            return q;
        }
    else{
        q=p->father;
        while ((q!=NULL) && (q->left==p)){
            p=q;
            q=q->father;
        }
    }
    return q;
}
int BSTDelete(struct node *t,struct node *p){
    int x=0,y=0;
    struct node *q;
    q=p->father;
    if(p->left==NULL && p->right==NULL){  
        if(q!=NULL){
            if (Isleft(p))
            q->left=NULL;
            else
            q->right=NULL;
        }
        else
            t=NULL;
        x=p->data;
        free(p);
        return x;
    }
    else{
        struct node *l,*r,*c;
        if(p->left==NULL || p->right==NULL){
            l=p->left;
            r=p->right;
            if(l==NULL)
                c=r;
            else
                c=l;
            if(Isleft(p))
                q->left=c;
            else
                q->right=c;
            c->father=q;
            x=p->data;
            free(p);
            return x;
        }
        else{
            q=BSTSuccessor(p);
            x=BSTDelete(t,q);
            y=p->data;
            p->data=x;
            return y;
        }  
    }
}
int maximum(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int height(struct node *p){
    int hl,hr;
    if(p==NULL)
        return 0;
    if(p->left==NULL)
        hl=0;
    else
        hl=1+p->left->height;
    if(p->right==NULL)
        hr=0;
    else
        hr=1+p->right->height;
    return maximum(hl,hr);
}
int Balancefact(struct node *p){
    int hl,hr;
    if(p==NULL)
        return 0;
    if(p->left==NULL)
        hl=0;
    else
        hl=1+p->left->height;
    if(p->right==NULL)
        hr=0;
    else
        hr=1+p->right->height;
    return (hl-hr);
}
struct node *BSTInsertionrec(struct node **p,int x){
    if((*p)==NULL)
        *p=makenode(x);
    else{
        if(x<(*p)->data)
            (*p)->left=BSTInsertionrec(&((*p)->left),x);
        else
            (*p)->right=BSTInsertionrec(&((*p)->right),x);
        (*p)->height=height(*p);
        return *p;
    }
}
struct node *leftRotation(struct node **p){
    struct node *y,*z;
    y=(*p)->right;
    z=y->left;
    y->left=(*p);
    (*p)->right=z;
    return y;
}
struct node *RightRotation(struct node **p){
    struct node *y,*z;
    y=(*p)->left;
    z=y->right;
    y->right=(*p);
    (*p)->left=z;
    return y;
}
struct node *ll(struct node **x){
    struct node *y;
    y=RightRotation(x);
    return y;
}
struct node *rr(struct node **x){
    struct node *y;
    y=leftRotation(x);
    return y;
}
struct node *lr(struct node **p){
    struct node *y,*z,*t;
    y=(*p)->left;
    z=leftRotation(&y);
    (*p)->left=z;
    t=RightRotation(p);
    return t;
}
struct node *rl(struct node **x){
    struct node *y,*z,*t;
    y=(*x)->right;
    z=RightRotation(&y);
    (*x)->right=z;
    t=leftRotation(x);
    return t;
}
struct node *AVLInsertion(struct node **t,int x){
    if((*t)==NULL)
        (*t)=makenode(x);
    else{
        if(x<(*t)->data){
            (*t)->left=AVLInsertion(&((*t)->left),x);
            if(Balancefact(*t)==2){
                if(x<(*t)->left->data)
                    (*t)=ll(t);
                else
                    (*t)=lr(t);
            }
        }
        else{
            (*t)->right=AVLInsertion(&((*t)->right),x);
            if(Balancefact(*t)==-2){
                if(x<(*t)->right->data)
                    (*t)=rr(t);
                else
                    (*t)=rl(t);
            }
        }
    }
    (*t)->height=height(*t);
    return *t;
}
void main(){
    struct node *root;
    root=NULL;
    root=AVLInsertion(&root,10);
    root=AVLInsertion(&root,9);
    root=AVLInsertion(&root,8);
    root=AVLInsertion(&root,7);
    root=AVLInsertion(&root,6);
    root=AVLInsertion(&root,5);
    root=AVLInsertion(&root,4);
    root=AVLInsertion(&root,3);
    root=AVLInsertion(&root,2);
    root=AVLInsertion(&root,1);
    inorder(&root);
}

