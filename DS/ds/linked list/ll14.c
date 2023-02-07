//swap pair wise
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
void swappair(struct node **start){
    struct node *t,*r;
    t=*start;
    r=(*start)->Next;
    while(r!=NULL){
        int x=t->info;
        t->info=r->info;
        r->info=x;
        t=t->Next;
        t=t->Next;
        r=r->Next;
        if(r!=NULL)
            r=r->Next;
    }
}
int main(){
    struct node *start;
    start=NULL;
    InsBeg(&start,1);
    InsEnd(&start,2);
    InsEnd(&start,3);
    InsEnd(&start,4);
    InsEnd(&start,5);
    InsEnd(&start,6);
    Traverse(&start);
    swappair(&start);
    Traverse(&start);
    return 0;
}