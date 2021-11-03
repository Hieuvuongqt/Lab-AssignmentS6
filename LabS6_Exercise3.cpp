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
	int count = 0, total = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0 && i%2==0){
			total += arr[i];
			count++;
		}
	}
	if(count > 0){
		printf("Average of odd numbers: %f",(float)total/count);
	}else{
		printf("There is no odd number in the even position");
	}
}
