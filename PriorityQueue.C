#include<stdio.h>
#include<malloc.h>

struct node{
  int data;
  int priority;
  struct node* next;
};

struct node* start=NULL;
struct node *insert(struct node* );
struct node *delete_ele(struct node*);
void display(struct node*);

int main(){
  int option;
  do{
    printf("\n-------Enter your Choice-------");
    printf("\n1.Insert element\n2.Delete element\n3.Display\n4.Exit");
    scanf("%d",&option );
    switch(option){
      case 1:
				start=insert(start);
				break;
			case 2:
				start = delete_ele(start);
				break;
			case 3:
				display(start);
				break;
      }
  }while(option!=4);
}


struct node *insert(struct node* start){
  int val,pri;
  struct node *ptr,*p;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter value & its priority: " );
  scanf("%d %d", &val,&pri );

  ptr->data=val;
  ptr->priority=pri;
  if (start==NULL || pri<start->priority){
    ptr->next=start;
    start=ptr;
  }
  else{
    p=start;
    while (p->next!=NULL && p->next->priority<=pri)
         p=p->next;
      ptr->next=p->next;
      p->next=ptr;

  }
  return start;
}

struct node* delete_ele(struct node* start){
  struct node *ptr;
  if (start==NULL){
    printf("\nUNDERFLOW" );
    //return ;
  }
  else {
    ptr=start;
    printf("The deleted element is: %d",ptr->data );
    start=start->next;
    free(ptr);
  }
  return start;

}

void display(struct node* start){
  struct node* ptr;
  ptr=start;
  if (start==NULL){
    printf("The queue is empty");

  }
  else {
    while (ptr!=NULL){
      printf("%d[priority=%d]\t", ptr->data,ptr->priority);
      ptr=ptr->next;
    }
  }
}
