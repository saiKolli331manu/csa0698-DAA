#include<stdio.h>
int gcd(int a,int b){
	if(b==0)
	  return a;
	return gcd(b,a%b);
}
int main(){
	int num1=43,num2=18;
	printf("gcd of %d and %d is %d\n",num1,num2,gcd(num1,num2));
	return 0;
}