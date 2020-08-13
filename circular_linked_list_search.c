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
void search(int k)
{ struct node *ptr=head;
  int flag=0;
  do
  { if(ptr->data==k)
    { flag=1;
    }
    ptr=ptr->next;
  }while(ptr!=head);
  if(flag==1)
  { printf("element found\n");
  }
  else
  { printf("element not found\n");
  }
}
int main()
{ int n,e;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  printf("\n");
  printf("enter the element to be searched\n");
  scanf("%d",&e);
  search(e);
  return 0;
}
