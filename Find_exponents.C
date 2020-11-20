#include<stdio.h>

int compute_exp(int x,int y){
  if (y==0)
    return 1;
  else
     return  (x * compute_exp(x,y-1));
}
int main(){
  int num, exp,res;
  printf("Enter a number and its exponent \n" );
  scanf("%d \n%d",&num,&exp);
  res=compute_exp(num,exp);
  printf("The result is : %d\n",res );
  return 0;
}
