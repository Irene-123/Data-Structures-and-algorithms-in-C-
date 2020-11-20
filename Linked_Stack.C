#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack{
  int data ;
  struct stack *next;
};

struct stack *top=NULL;
struct stack *push(struct stack*,int);
struct stack *pop(struct stack*);
struct stack *display(struct stack*);
int peek(struct stack*);


int main(){
  int val,option;
  do
{

printf("\n *****MAIN MENU*****");

printf("\n 1. PUSH");

printf("\n 2. POP");

printf("\n 3. PEEK");

printf("\n 4. DISPLAY");

printf("\n 5. EXIT");

printf("\n Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
		case 1:

        printf("\n Enter the number to be pushed on stack: ");
        			scanf("%d", &val);

        top = push(top, val);
        			break;
		case 2:
			top = pop(top);
			break;
		case 3:
			val = peek(top);

if (val != -1)

printf("\n The value at the top of stack is: %d", val);
			else

printf("\n STACK IS EMPTY");
			break;
		case 4:
			top = display(top);
			break;
		}
}while(option != 5);
}



struct stack *push(struct stack *top, int val){
  struct stack *ptr;
  ptr=(struct stack*)malloc(sizeof(struct stack));
  ptr->data=val;
  if (top==NULL){
    ptr->next=NULL;
    top=ptr;
  }
  else {
    ptr->next=top;
    top=ptr;
  }

 return top;
}

struct stack *pop(struct stack *top){
  struct stack *ptr;
  ptr=top;
  if (top==NULL){
    printf("The Stack is empty\n" );
  }
  else {
    top=top->next;
    printf("The Value popped is: %d\n",ptr->data );
    free(ptr);
  }

  return top;
}

struct stack *display(struct stack *top){
  struct stack *ptr;
  ptr=top;
  if(top==NULL)
  printf("The stack is empty\n" );
  else {
  printf("The elements in the list are:\n" );
  while (ptr!=NULL){
    printf("%d\n",ptr->data );
    ptr=ptr->next;
  }
}
  return top;
}

int peek(struct stack *top){
  if (top==NULL)
    return -1;
   else
     return top->data;
}
