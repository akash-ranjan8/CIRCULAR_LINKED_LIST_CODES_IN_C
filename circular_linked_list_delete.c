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
void delete(int k)
{ struct node *curr,*prev;
  int c=0;
  curr=head;
  prev=curr;
  while(prev->next!=head)
  { prev=prev->next;
    ++c;
  }
  int i=0;
  while(i<=c)
  { if(curr->data==k)
    { if(curr->next!=curr)
      { prev->next=curr->next;
      }
      else
      { prev->next=NULL;
      }
      if(curr==head)
      { head=prev->next;
      }
      free(curr);
      if(prev!=NULL)
      { curr=prev->next;
      }
      else
      { curr=NULL;
      }
    }
    else
    { prev=curr;
      curr=curr->next;
    }
    ++i;
  }
}
int main()
{ int n,e;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  printf("enter the data to be deleted\n");
  scanf("%d",&e);
  printf("\n");
  delete(e);
  display();
  return 0;
}
     
