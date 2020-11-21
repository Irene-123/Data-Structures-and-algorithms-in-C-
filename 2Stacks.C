#include<stdio.h>
#include<stdlib.h>

int stack[20];
int top1=-1;
int top2=20;
int pop1();
int pop2();
void push1(int);
void push2(int);
void display();

int main(){
  int val,option;
  do{
    printf("\n -----------MAIN MENU-----------");

    printf("\n 1. Push on Stack 1 ");

    printf("\n 2.Push on Stack 2 ");

    printf("\n 3. Pop on stack 1");

    printf("\n 4.Pop on stack 2");

    printf("\n 5. Display the stack \n");
    printf("6. EXIT\n" );

    printf("\n Enter your option: ");
    		scanf("%d", &option);

    switch(option){
      case 1:
           printf("Enter the element to be pushed on stack 1: " );
           scanf("%d", &val);
           push1(val);
           break;
      case 2:
          printf("Enter the element to be pushed on stack 2: " );
          scanf("%d", &val);
          push2(val);
          break;
      case 3:
          val=pop1();
          printf("The element popped from  stack 1 is: %d" ,val);
          break;
      case 4:
          val=pop2();
          printf("The element popped from  stack 2 is: %d" ,val);
          break;
      case 5:
          printf("The stack looks like:\n");
          display();
          break;


    }
  }while (option !=6);

  return 0;


}

void push1(int x){
  if (top1==top2-1)
    printf("Stack OverFlow !\n");
  else {
    top1+=1;
    stack[top1]=x;
  }
}

void push2(int x){
  if (top2==top1+1)
     printf("Stack OverFlow !\n");
  else {
    top2-=1;
    stack[top2]=x;
  }
}

int pop1(){
  if (top1==-1){
   printf("Stack UnderFlow !\n");
   return 0;
 }
  else {

    return (stack[top1--]);

  }
}

int pop2(){
  if (top2==20){
   printf("Stack UnderFlow !\n");
   return 0;
 }
  else {

    return (stack[top2--]);
  }
}

void display(){
  printf("The elements of the stack 1 are:\n" );
  for (int i=0;i<=top1;i++){

    printf("%d\t",stack[i] );
  }
  printf("\n" );
  printf("-----------------\n" );
  printf("The elements of the stack 2 are:\n");
  for (int i=19;i>=top2;i--){

    printf("%d\t",stack[i] );
  }
}
