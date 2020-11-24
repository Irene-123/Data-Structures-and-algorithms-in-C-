#include<stdio.h>
#define MAX 10

int queue[MAX],rearA=-1,rearB=MAX,frontA=-1,frontB=MAX;

void insertA(int val) {
  if (rearA==rearB-1)
   printf("\nOverFlow" );
   else {
     if (frontA==-1 && rearA==-1){
       rearA=frontA=0;
       queue[rearA]=val;
     }
     else queue[++rearA]=val;

 }
}
 int deleteA(){
   int val;
   if (frontA==-1 ){
     printf("UNDERFLOW\n" );
     return -1;
   }
   else {
     val=queue[frontA];
     frontA++;
     if (frontA>rearB)
     frontA=rearA=-1;
     return val;
   }
  }

  void displayA(){
    if(frontA==-1 )
    printf("The queue is empty!");
    else{
      for(int i=0;i<=rearA;i++)
      printf("%d\t",queue[i] );
    }
  }

  void insertB(int val){
    if(rearA==rearB-1){
      printf("Overflow!\n" );
    }
    else{
      if(frontB==MAX && rearB==MAX){
        frontB=MAX-1;
        rearB=MAX-1;
        queue[rearB]=val;
      }
      else{
        queue[--rearB]=val;
      }
    }
  }


int deleteB()
{
int val;
if(frontB==MAX)
{
		printf("\n UNDERFLOW");
		return -1;
}
else
{

val = queue[frontB];
		frontB--;
		if (frontB<rearB)
			frontB=rearB=MAX;
		return val;
}
}
void displayB()
{
int i;
if(frontB==MAX)

printf("\n QUEUE B IS EMPTY");
else
{
		for(i=frontB;i>=rearB;i--)
			printf("\t %d",queue[i]);
}
}
int main()
{
int option, val;
do
{
		printf("\n *******MENU******");

printf("\n 1. INSERT IN QUEUE A");

printf("\n 2. INSERT IN QUEUE B");

printf("\n 3. DELETE FROM QUEUE A");

printf("\n 4. DELETE FROM QUEUE B");

printf("\n 5. DISPLAY QUEUE A");

printf("\n 6. DISPLAY QUEUE B");

printf("\n 7. EXIT");

printf("\n Enter your option : ");
		scanf("%d",&option);

switch(option)
		{
			case 1: printf("\n Enter the value to be inserted in Queue A : ");
				scanf("%d",&val);
				insertA(val);
				break;
			case 2: printf("\n Enter the value to be inserted in Queue B : ");
				scanf("%d",&val);
				insertB(val);
				break;
			case 3: val=deleteA();
				if(val!=-1)
				printf("\n The value deleted from Queue A = %d",val);
				break;
			case 4 : val=deleteB();
				if(val!=-1)
        printf("\n The value deleted from Queue B = %d",val);
        break;
      case 5: printf("\n The contents of Queue A are : \n");
   displayA();
  break;
case 6: printf("\n The contents of Queue B are : \n");
  displayB();
  break;
}
}while(option!=7);
return 0;
}
