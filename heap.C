#include<stdio.h>
#include<stdlib.h>
int arr[100];
void insert_ele(int,int);
int delete_ele(int);
void display_tree(int);

int main(){
  int num,option;
  int n=0;

  do{
    printf("\nEnter your option:" );
    printf("\n1.Insert an element\n2.Delete an element\n3.Display the element\n4.Quit");
    scanf("%d",&option);
    switch(option){
      case 1:
         printf("\nEnter the element to be inserted:" );
         scanf("%d",&num);
         insert_ele(num,n);
         n+=1;
         break;
      case 2:
        num=delete_ele(n);
        printf("\nThe popped element is: %d",num);
        break;
      case 3:
        display_tree(n);
        break;
     case 4:
        exit(0);
  }

}while(option!=4);

return 0;
}


void insert_ele(int x,int size){

  int parentnode;
  while (size>0){
    parentnode=(size-1)/2;
    if (arr[parentnode] >= x){
      arr[size]=arr[parentnode];
      return;
    }
    arr[size]=arr[parentnode];
    size=parentnode;

  }

  arr[0]=x;
}

int delete_ele(int n){
  int x=arr[0],temp,l,r;
  arr[0]=arr[n-1];
  int i=0;
  while (r<n){
    l=2*i+1;
    r=2*i + 2;
    if ((arr[i] > arr[r]) && (arr[i] > arr[l]) )
      return x;
    if (arr[l]> arr[r])    {
      temp=arr[i];
      arr[i]=arr[l];
      arr[l]=temp;
      i=l;

    }
    else {
      temp=arr[i];
      arr[i]=arr[r];
      arr[r]=temp;
      i=r;
    }
    l=2*i+1;
    r=2*i+2;
  }
  if (l == n - 1 && arr[i])    {
        temp = arr[i];
        arr[i] = arr[l];
        arr[l] = temp;
    }
    return x;
}



void display_tree(int n){
  for (int i=0;i<n;i++){
    printf("%d. %d\t", i,arr[i]);
  }


}
