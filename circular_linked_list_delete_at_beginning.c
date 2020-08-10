#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
}*head;
void create(int n)
{ struct node *new,*prev;
  if(n<=0)
  { printf("cannot be created\n");
  }
  else
  { int i,k,e;
    printf("enter the data for first node\n");
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
void delete_at_beginning()
{ struct node *ptr=head;
  while(ptr->next!=head)
  { ptr=ptr->next;
  }
  struct node *t=head;
  head=head->next;
  ptr->next=head;
  free(t);
}
int main()
{ int n;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  printf("\n");
  delete_at_beginning();
  display();
  return 0;
}
