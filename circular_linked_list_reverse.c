#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
}*head;
void create(int n)
{ struct node *new,*prev;
  int k,e,i;
  printf("enter the first element\n");
  scanf("%d",&e);
  head=(struct node*)malloc(sizeof(struct node));
  head->data=e;
  head->next=NULL;
  prev=head;
  for(i=2;i<=n;++i)
  { printf("enter the data\n");
    scanf("%d",&k);
    new=(struct node*)malloc(sizeof(struct node));
    new->data=k;
    new->next=NULL;
    prev->next=new;
    prev=new;
  }
  prev->next=head;
}
void display()
{ struct node *ptr=head;
  do
  { printf("%d\t",ptr->data);
    ptr=ptr->next;
  }while(ptr!=head);
}
void reverse()
{ struct node *prev,*last,*curr;
  last=head;
  prev=head;
  curr=head->next;
  head=head->next;
  while(head!=last)
  { head=head->next;
    curr->next=prev;
    prev=curr;
    curr=head;
  }
  curr->next=prev;
  head=prev;
}
int main()
{ int n;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  printf("\nreversed order is as follows\n");
  reverse();
  display();
  return 0;
}
  
