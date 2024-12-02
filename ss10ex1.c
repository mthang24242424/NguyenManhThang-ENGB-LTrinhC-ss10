#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int number;
	int flag =-1; 
	printf("nhap vao gia tri bat ki de ktra: ");
	scanf("%d",&number);
	for(int i=0;i<5;i++){ 
		if(number==arr[i]){
			flag=i;
			break; 
		} 
	}
	if(flag!=1){
		printf("gia tri nay trong mang o vi tri thu %d ",flag+1); 
	} else{
		printf("ko co gia tri nay trong mang"); 
	} 
	return 0; 
} 
