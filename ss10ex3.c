#include<stdio.h>
int main(){
	int arr[5]={7,4,5,1,2};
	for(int i=0; i<5;i++){
		int temp =arr[i];
		int j =i-1;
		 
		 while(j>=0&&arr[j]>temp){
		 arr[j+1]=arr[j];
		 j=j-1; 
	} 
	arr[j+1]=temp; 
  }
  for(int i=0;i<5;i++){
  	printf("%d",arr[i]); 
  }
  return 0; 
} 
