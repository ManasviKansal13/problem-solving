//merge point find krna
#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
};
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
} 
void InsBeg(struct node **START,int x)
{
  struct node *p;
  p=GetNode();
  p->info=x;
  p->Next=*START;
  *START=p;
}
void InsAft(struct node **p,int x)
 {
 struct node *q;
 q=GetNode();
 q->info=x;
 q->Next=(*p)->Next;
 (*p)->Next=q;
 }
void InsEnd(struct node **START,int x)
{
  struct node *q,*p;
  q=*START;
  if(q==NULL)
  {
    InsBeg(START,x);
  }
  else
  {
    while(q->Next!=NULL)
    q=q->Next;
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    q->Next=p;
    }
}
int DelBeg(struct node **START)
 {
 struct node *p;
 int x;
 p=(*START);
 (*START)=(*START)->Next;
 x=p->info;
 free(p);
 return x;
 }
 int DelAft(struct node **p)
 {
 int x;
 struct node *q;
 q=(*p)->Next;
 (*p)->Next=q->Next;
 x=q->info;
 free(q);
 return x;
 }
void Traverse(struct node **START)
{
  struct node *p;
  p=*START;
  while(p!=NULL)
    {
      printf("%d\t",p->info);
      p=p->Next;
    }
}
int count(struct node **start){
    struct node *p;
    p=*start;
    int c=0;
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->Next;
        c++;
    }
    return c;
}
struct node *reverse(struct node **start)
{
struct node *p,*n,*c;
c=*start;
p=NULL;
n=c->Next;
while (c!=NULL)
{
    c->Next=p;
    p=c;
    c=n;
    if (n!=NULL)
    {
        n=n->Next;
    }
}
*start=p;
return *start;
}
int mergepoint(struct node **start1,struct node **start2){
    struct node *p,*q;
    p=*start1;
    q=*start2;
    int m=count(start1);
    int n=count(start2);
    if(m>n){
        for(int i=1;i=m-n;i++)
            p=p->Next;
    }
    else{
        if(n>m){
            for(int i=1;i=n-m;i++)
                q=q->Next;
        }
    }
    while(p!=q){
        p=p->Next;
        q=q->Next;
    }
    return p;
}
int main(){
    struct node *start1,*start2;
    start1=NULL;
    start2=NULL;
    InsBeg(&start1,1);
    InsEnd(&start1,2);
    InsEnd(&start1,3);
    InsEnd(&start1,4);
    InsEnd(&start1,5);
    InsEnd(&start1,6);
    InsEnd(&start1,7);
    InsEnd(&start1,8);
    InsBeg(&start2,10);
    InsEnd(&start2,11);
    InsEnd(&start2,5);
    InsEnd(&start2,6);
    InsEnd(&start2,7);
    InsEnd(&start2,8);
    Traverse(&start1);
    Traverse(&start2);
    reverse(&start1);
    mergepoint(&start1,&start2);
    return 0;
}