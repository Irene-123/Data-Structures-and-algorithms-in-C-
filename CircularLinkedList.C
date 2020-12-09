#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
  int data;
  Node *next;
}node;

void create();
void del();
void display();

node *front=NULL,*rear=NULL,*temp;

int main(){
  int option;
  do
	{
 	printf("\nMenu\n\t 1 to create the element : ");
	printf("\n\t 2 to delete the element : ");
	printf("\n\t 3 to display the queue : ");
	printf("\n\t 4 to exit from main : ");
	printf("\nEnter your choice : ");
	scanf("%d",&option);

		switch(option)
		{
			case 1:
	 		create();
			break;

		 	case 2:
	 		del();
	 		break;

	 		case 3:
	 		display();
	 		break;

	 		case 4:
	 		return 1;

			default:
	 			printf("\nInvalid choice :");
	 	}
	}while(1);

  return 0;
}

void create(){
  node *newNode;
  int val;
  newNode=(node*)malloc(sizeof(node));
  printf("\nEnter a value to be inserted: ");
  scanf("%d",&val);
  newNode->data=val;
  newNode->next=NULL;
  if (rear==NULL){
  front=rear=newNode;
  rear->next=front;
}
else {
  rear->next=newNode;
  rear=newNode;
  rear->next=front;
  }
}

void del(){
  temp=front;
  if (front==NULL){
    printf("\nThe list is empty");
  }
  else {

  if (front==rear){
    printf("\n%d", front->data);
    front=rear=NULL;
  }
  else {
    printf("\n%d", front->data);
    front=front->next;
    rear->next=front;

  }
  temp->next=NULL;
  free(temp);
  }
}

void display(){

  temp=front;
  if (front==NULL){
    printf("\nThe list is empty");
  }
  else {
    while(temp!=rear){
      printf("%d\t", temp->data);
      temp=temp->next;
    }
  }
}
