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
	int sole = 0;
	for(int i = n-1;i>=0;i--){
		if(arr[i]%2!=0){
			sole = arr[i];
			break;
		}
	}
	if(sole != 0){
		printf("Last odd number: %d",sole);
	}else{
		printf("Arrays with no odd numbers");
	}
}
