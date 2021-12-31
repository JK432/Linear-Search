#include <stdio.h>

int main(void) {
int arr[10],n,x=0,count=0;


scanf("%d",&n);
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}
scanf("%d",&x);
for(int i=0;i<5;i++){
  if(arr[i]==x){
    printf("Searched element present at index %d of the array\n",i+1);
    count=1;
  }
  
}
if(count==0){
    printf("element is not present in the array");
  }
}