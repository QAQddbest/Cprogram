#include <stdio.h>
#define N 1000000007
long long int power(int a,int b){
	long long int temp=1;
	while(b>0){
		if(b&1==1){
			temp=a*temp%N;
		}
		a=a*a%N;
		b>>=1;
	}
	return temp%N;
}
int main(){
	int a,b;
	long long int c;
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("%d^%d=%lld",a,b,c);
}