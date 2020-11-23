#include<stdio.h>
#define MAX 10
int deque[MAX];
int left=-1,right=-1;
void input_deque();
void output_deque();
void insert_right();
void insert_left();
void delete_right();
void delete_left();
void display();
int main(){

  int option;

    printf("---------Enter Choice-----------\n" );
    printf("1.Input Dequeue\n2.Output Dequeue\n" );
    scanf("%d",&option);
    switch(option){
      case 1:
        input_deque();
        break;
      case 2:
         output_deque();
         break;
    }
  return 0;

}

void input_deque(){
  int option;

  do{
    printf(" INPUT RESTRICTED DEQUE\n");
    printf("1.Insert value\n2.Delete from right\n3.Delete from Left\n4.Display\n5.EXIT\n" );
    scanf("%d",&option );
    switch (option) {
      case 1:
         insert_right();
         break;
      case 2:
         delete_right();
         break;
      case 3:
         delete_left();
         break;
      case 4:
         display();
         break;
    }
  }while(option!=5);
}
void output_deque()
{
   int option;
  do
   {

    printf("OUTPUT RESTRICTED DEQUE");

    printf("\n 1.Insert at right");

    printf("\n 2.Insert at left");

    printf("\n 3.Delete from left");
    printf("\n 4.Display");
    printf("\n 5.Quit");

    printf("\n Enter your option : ");
    		scanf("%d",&option);

switch(option)
		{
			case 1:
				insert_right();
				break;
			case 2:
				insert_left();
				break;
		 case 3:
				delete_left();
				break;
		case 4:
				display();
				break;
		}
 }while(option!=5);

}

void insert_right(){
  int val;
  printf("\nEnter the value to be inserted right:\n" );
  scanf("%d", &val);
  if ((left==0 && right==MAX-1 ) || (left==right+1)){
    printf("OVERFLOW\n" );
    return;
  }
  if (left==-1){
    left=0;
    right=0;
  }
  else {
    if (right==MAX-1)
    right=0;
    else
     right++;
  }
  deque[right]=val;

}

void insert_left(){
  int val;
  printf("Enter the value to be inserted left:\n" );
  scanf("%d", &val);
  if ((left==0 && right==MAX-1 ) || left==right+1){
    printf("OVERFLOW\n" );
    return;
  }
  if (left==-1){
    left=0;
    right=0;
  }
  else {
    if (left==0)
    left=MAX-1;
    else
     left--;
  }
  deque[left]=val;

}

void delete_right(){
  if (left==-1){
    printf("UNDERFLOW\n");
    return;
  }
  printf("The deleted element is: %d\n",deque[right]);
  if (right==left){
    left=-1;
    right=-1;
  }
  else {
    if (right==0)
      right=MAX-1;
    else
    right--;
  }
}

void delete_left(){
  if (left==-1){
    printf("UNDERFLOW\n");
    return;
  }
  printf("The deleted element is: %d\n",deque[left]);
  if (right==left){
    left=-1;
    right=-1;
  }
  else {
    if (left==MAX-1)
      left=0;
    else
    left++;
  }
}

void display(){
  int front=left, rear=right;
  if (front==-1){
    printf("Queue is empty\n" );
    return;
  }
  if(front <= rear )
{

while(front <= rear)
		{
			printf("%d\t",deque[front]);
			front++;
		}
}
else
{

while(front <= MAX-1)
		{
			printf("%d\t", deque[front]);
			front++;
		}

front = 0;

while(front <= rear)
		{
			printf("%d\t",deque[front]);
			front++;
		}
}
printf("\n");

}
