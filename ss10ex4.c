#include<stdio.h>
int main(){
	int number[5]={4,1,5,3,2};
	for(int i=0;i<5;i++){
		int minIndex =i;
		for(int j=i;j<5;j++){
			if(number[j]<number[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex!=i){
			int temp;
			temp = number[minIndex];
			number[minIndex]=number[i];
			number[i]=temp;
		}
	}
	for(int i=0;i<5;i++){
		printf("%d \t",number[i]);
	}
	return 0;
}
