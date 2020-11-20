#include<stdio.h>
#include<stdlib.h>

int stk[10];
int top=-1;
int pop();
void push(int);

int main(){
 int val;
  int arr[10];
  printf("\n Enter the  elements in the array : ");
  for (int i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  for (int i=0;i<10;i++){
    push(arr[i]);
  }
  for (int i=0;i<10;i++){
    val=pop();
    arr[i]=val;
  }
  printf("The reversed array is :\n");
  for (int i=0;i<10;i++){
    printf("%d\n", arr[i]);
  }
  return 0;
}
void push(int val){

  stk[++top]=val;
}
int pop(){
  return (stk[top--]);

}
