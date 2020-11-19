#include<stdio.h>
#include<stdlib.h>
#define MAX  3

int  st[MAX],top=-1;
void  push(int  st[],int  val);
int  pop(int  st[]);
int  peek(int  st[]);
void  display(int  st[]);

int main(){
int  val,option;

do {
printf("\n-------CHOOSE AN OPTION-----");
printf("\n1. PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5. EXIT\n");
scanf("%d",&option);
switch(option)
{


 case 1:
       printf("\nEnter the number to be pushed on stack:");
       scanf("%d",&val);
       push(st,val);
       break;
 case 2:
      val=pop(st);
      if (val !=-1)
      printf("\n The value deleted from stack is: %d",val);
      break;
 case 3:
      val=peek(st);
      if (val!=-1)
      printf("\n The value on top of the stack is : %d",val);
      break;
 case 4:
     display(st);
     break;
 }
 } while (option!=5);

 return 0;
 }


void push(int st[],int val){
   if (top==MAX-1){
     printf("Stack Overflow");
     }
   else {
	 top++;
	 st[top]=val;
	}
   }

int pop(int st[])
{
  int val;
  if (top==-1)
  {
    printf("\n.Stack Underflow");
    return -1;
    }
  else{

     val=st[top];
     top--;
     return val;
   }
}
void display(int st[])
{
  int i;
  if (top==-1)
  {
  printf("Stack is empty");

  }
  else
  {
    for (i=top;i>=0;i--){
      printf("\n%d",st[i]);
      }
    printf("\n");
  }
 }



int peek(int st[])
{
 if (top==-1){
   printf("\n Stack is empty");
   return -1;
   }
  else  {
  return (st[top]);
   }

  }
