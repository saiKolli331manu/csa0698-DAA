#include<stdio.h>
#include<math.h>
int isArmstrong(int n,int temp){
	if(n==0)
	 return temp==0;
return isArmstrong(n/10,temp-pow(n%10,3));
	 }
	 int main(){
	 	int num=153;
	 	if(isArmstrong (num,num))
	 	 printf("is armstrong number");
	 	else
	 	 printf(" is not an armstrong number");
	 	
	 	return 0;
	 }