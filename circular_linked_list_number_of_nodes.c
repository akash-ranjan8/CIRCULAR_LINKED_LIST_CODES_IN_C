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
void count_nodes()
{ struct node *ptr=head;
  int l=0;
  do
  { ++l;
    ptr=ptr->next;
  }while(ptr!=head);
   printf("the no. of nodes: %d\n",l);
}
int main()
{ int n;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  count_nodes();
  return 0;
}

  
