#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
}*head;
void create(int n)
{ if(n<=0)
  { printf("cannot be created\n");
  }
  else
  { struct node *new,*prev;
    int i,k,e;
    printf("enter the first node data\n");
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
}
void display()
{ struct node *ptr=head;
  do
  { printf("%d\t",ptr->data);
    ptr=ptr->next;
  }while(ptr!=head);
}
void insertion(int k,int m)
{ struct node *curr=head;
  int i;
  struct node *new;
  new=(struct node*)malloc(sizeof(struct node));
  new->data=k;
  new->next=NULL;
  for(i=2;i<=m-1;++i)
  { curr=curr->next;
  }
  new->next=curr->next;
  curr->next=new;
}
int main()
{ int n,e,p;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  printf("\nenter the element and position\n");
  scanf("%d%d",&e,&p);
  insertion(e,p);
  display();
  return 0;
}
