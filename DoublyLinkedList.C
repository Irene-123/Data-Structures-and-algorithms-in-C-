#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
  struct Node* prev;
};

struct Node* head;
struct Node *getNewNode(int x){

  struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=x;
  newNode->next=NULL;
  newNode->prev=NULL;
  return newNode;
}

void insertAtHead(int x){
  struct Node *temp=head;
  struct Node *newNode=getNewNode(x);
  if (head==NULL)
    head=newNode;
  else {
    head->prev=newNode;
    newNode->next=head;
    head=newNode;

  }
}

void insertAtTail(int x){
  struct Node *temp=head;
  struct Node *newNode=getNewNode(x);

  if (head==NULL){
    head=newNode;

  }
  else{
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
  }
}

void print(){
  struct Node *temp=head;

  while (temp->next!=NULL){
    printf("%d\t",temp->data);
    temp=temp->next;
  }
  printf("\t%d",temp->data );
  printf("\n" );
}

void reverse_print(){
  struct Node* temp=head;
  while (temp->next!=NULL){

    temp=temp->next;
  }
  while (temp!=NULL){
    printf("%d\t", temp->data);
    temp=temp->prev;
  }

}

int main(){
  int option;
  int val;
  head=NULL;
  do{
    printf("\n1.insert At Head\n2.Insert at tail\n3.Print\n4.Reverse print\n5.Exit");
    printf("\n Enter your option : ");
    		scanf("%d",&option);
    switch(option){
      case 1:
         printf("Enter Value ");
         scanf("%d",&val );
         insertAtHead( val);
         break;
      case 2:
            printf("Enter Value ");
            scanf("%d",&val );
            insertAtTail( val);
            break;
      case 3:
          print();
          break;
      case 4:
         reverse_print();
         break;
    }
  }while(option!=5);

  return 0;
}
