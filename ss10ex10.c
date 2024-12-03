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
	// so sanh va sap xep theo thu tu cheo chinh tu lon den nho
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j][n-j-1]<arr[j+1][n-j-2]){
			int temp;
			temp=arr[j][n-j-1];
			arr[j][n-j-1]=arr[j+1][n-j-2];
			arr[j+1][n-j-2]=temp;
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
