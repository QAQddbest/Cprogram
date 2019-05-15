#include <stdio.h>
#include <stdlib.h>
int GetPrime(int n,int *arr){
	int i,j;
	int cnt=0;
	int *tmp=(int *)calloc(n,sizeof(int));
	for(i=2;i<n;i++){
		if(tmp[i]==0)//the number i is still exist
			arr[cnt++]=i;
		for(j=0;j<cnt&&i*arr[j]<n;j++){
			tmp[i*arr[j]]=1;
			if(i%arr[j]==0)
				break;
		}
	}
	free(tmp);
	return cnt;
}
int main(){
	int n;
	printf("Ceil of the Array:\n");
	scanf("%d",&n);
	int *arr=(int *)calloc(100001,sizeof(int));
	int sum=GetPrime(n,arr);
	printf("sum=%d\n",sum);
	for(int i=1;i<sum+1;i++){
		printf("%d ",arr[i-1]);
		if(i%5==0)
			printf("\n");
	}
	free(arr);
	return 0;
}