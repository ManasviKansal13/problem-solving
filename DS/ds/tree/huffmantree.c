//huffmannn treeeeeee
struct node{
    char data;
    struct node *left;
    struct node *right;
    struct node *Freq;
    struct node *Char;
    struct node *next;
};
void Intialize(struct Queue *Q){
    Q->front=0;
    Q->rear=-1;
}
struct node* EnQueue(struct node *PQ,struct node *x){
    struct node *P,*Q;
    P=PQ;
    Q=NULL;
    while(P!=NULL && x->Freq>=P->Freq){
        Q=P;
        P=P->next;
    }
    //insbeg
    if(Q==NULL){
        x->next=PQ;
        PQ=x;
    }
    //insend
    else{
        x->next=Q->next;
        Q->next=x;
    }
}

void DeQueue(struct node *PQ){
    struct node *P;
    P=PQ;
    PQ=PQ->next;
    return P;
}
struct node* MakeNode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
    p->Freq=NULL;
    p->Char=NULL;
    return p;
}
void HuffmanTree(char C[],int F[],int N){
    Intialize(PQ);
    for(int i=0;i<N-1;i++){
        struct node* x=MakeNode();
        x->Freq=F[i];
        x->Char=C[i];
        EnQueue(PQ,x);
    }
    for(int i=1;i<N-1;i++){
        struct node *x,*y,*z;
        x=DeQueue(PQ);
        y=DeQueue(PQ);
        z=MakeNode();
        z->left=x;
        z->right=y;
        z->Freq=x->Freq+y->Freq;
        EnQueue(PQ,z);
    }
    return PQ;
}
int main(){
    struct node *root=NULL;
}