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
	
	int count = 0, max = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]>0){
			count++;
			if(count > max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	printf("Maximum number of consecutive positive numbers: %d",max);	
}
