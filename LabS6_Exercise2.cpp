#include <stdio.h>
int main(){
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter element position %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Enter the number X you want to find:");
	scanf("%d",&x);
	
	int i=0; 
	for(;i<n;i++){
		if(arr[i] == x){
			printf("%d is in the list just entered",x);
			break;
		}
	}
	if(i>=n){
		printf("%d does not exist in the list",x);
	}
}
