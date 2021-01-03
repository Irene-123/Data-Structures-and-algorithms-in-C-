#include<stdlib.h>
#include<stdio.h>

int main(){
  int n;
  int *arr;
  printf("\nEnter the number of elements in the array:" );
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(n));
  if (arr==NULL){
      printf("\nThe space could not be allocated:");
      return (0);
  }

printf("\nEnter the values of the array");
for (int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}
printf("\n");
for (int i=0;i<n;i++){
  printf("%d\t", arr[i]);
}

return 0;

}
