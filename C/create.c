#include<stdio.h>
#include<stdlib.h>
struct node 
{
   int data;
   struct node * link;
};
void display(struct node*);
struct node * create_list(int);
struct node* head=NULL;
int main()
{
  int n;
  printf("Enter the number of nodes in the linked list:");
  scanf("%d",&n);

  create_list(n);
  display(head);
return 0;
}
struct node * create_list(int n)
{
    struct node * ptr=NULL;
    struct node * temp=NULL;
    int i;
    for(i=0;i<n;i++)
    {  
        printf("\nEnter the value of %d node:",(i+1));
       temp=(struct node *)malloc(sizeof(struct node ));
       scanf("%d",&temp->data);
       temp->link=NULL;
       if(head==NULL)
       head=temp;
       else 
       {
        ptr=head;
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
        ptr->link=temp;
       }
    }
    return(head);
}
void display(struct node *head1)
{ 
    struct node *ptr=head1;
    printf("The linked list:");
    while(ptr!=NULL)
    {
        printf("\t%d\t",ptr->data);
        ptr=ptr->link;
    }
} 