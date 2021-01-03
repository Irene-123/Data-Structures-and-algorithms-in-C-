#include<stdio.h>
#include<stdlib.h>

int main(){

  int **arr;
  int rows,cols;

  printf("\nEnter the number of rows and columns respectively:" );
  scanf("%d %d",&rows,&cols );

  arr=(int**)malloc(rows*sizeof(int*));

  if (arr==NULL){
    printf("\nThe space could not be allocated:");
    return (0);
  }
  for (int i=0;i<rows;i++){
    arr[i]=(int*)malloc(cols*sizeof(int));
    if (arr[i]==NULL){
      printf("\nThe space could not be allocated:");
      return (0);
    }
  }
printf("\nEnter array elements");
  for(int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  for (int i=0;i<rows;i++){
    printf("\n");
    for(int j=0;j<cols;j++){
      printf("%d\t", arr[i][j]);
    }
  }
  for (int i=0;i<rows;i++)
    free(arr[i]);
  free(arr);

 return 0;

}
