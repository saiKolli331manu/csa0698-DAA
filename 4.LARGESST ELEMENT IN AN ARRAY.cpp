#include<stdio.h>
int largest(int arr[],int n){
	if(n==1)
	 return arr[0];
	 int max=largest(arr,n-1);
	 return arr[n-1]>max?arr[n-1]:max;
}
int main(){
	int array[]={1,5,3,9,2};
	int n=sizeof(array)/sizeof(array[0]);
	printf("largest element :%d\n",largest(array,n));
	return 0;
}