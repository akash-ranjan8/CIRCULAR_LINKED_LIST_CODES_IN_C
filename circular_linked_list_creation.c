#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
}*head;
void create(int n)
{ struct node *new,*prev;
  int i,e,k;
  if(n<1)
  { printf("cannot be created\n");
  }
  else
  { printf("enter the data for first node\n");
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
int main()
{ int n,i,k;
  printf("enter the number of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  return 0;
}
  
