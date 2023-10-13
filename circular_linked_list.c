//creation of circular single linked list

#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node * next;
};
struct node * head,*tail;

//for printing the circular single linked list
void printlist(struct node *ptr){
    struct node*head=ptr;
    struct node*current=ptr;
    while(current->next!=head){   // here it checks whether the current next address is equal to head or not
        printf(" data %5d\t",current->data);
        printf("%ld\t is current->next  ",current->next);
        printf("%ld  is current",current);
        printf("\n");
        current=current->next;
    } printf(" data %5d\t",current->data);  //this is to print tail as the above code only prints upto before of tail
      printf("%ld\t is current->next  ",current->next); 
      printf("%ld  is current",current);
}

//for creating a linked list 
void createlist(int data){
    struct node * new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->data=data;
    if (head==NULL){
        head=new;
        tail=new;
    }else{
        tail->next=new;
        new->next=head; //creating link between tail->next and head
        tail=new; //here it becomes circular
    }
}
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        createlist(x);    //creation of circular single linked list
    }
    printlist(head); //printing of circular single linked list
    return 0;
    }
