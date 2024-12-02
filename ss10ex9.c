#include<stdio.h>
int main(){
	int n,m;
	printf("nhap so hang cua mang: ");
	scanf("%d",&n) ;
	printf("nhap so cot cua mang: ");
	scanf("%d",&m);
	while(n<=0||m<=0){
		printf("ko hop le!!! \n");
		printf("nhap lai so hang cua mang: ");
		scanf("%d",&n) ;
		printf("nhap lai so cot cua mang: ");
		scanf("%d",&m); 
	} 
	int arr[n][m]; 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("gia tri cua arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]); 
		} 
	} 
	// so sanh va sap xep theo thu tu cheo chinh tu nho den lon
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j][j]>arr[j+1][j+1]){
			int temp;
			temp=arr[j][j];
			arr[j][j]=arr[j+1][j+1];
			arr[j+1][j+1]=temp;
		}
		}	
	}
	printf("ma tran sau khi sap xep \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]); 
		} 
		printf("\n"); 
	} 
	return 0;
}
