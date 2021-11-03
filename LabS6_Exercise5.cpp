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
	int m = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			m = arr[i];
			break;
		}
	}
	if(m ==0){
		printf("Array has no positive numbers");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && arr[i]< m){
				m = arr[i];
			}
		}
		printf("Smallest positive number: %d",m);
	}
}
