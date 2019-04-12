#include <stdio.h>
#include <string.h>
#define JUDGE >

void print(int *,int);

void adjustHeap(int *s,int cur,int sum){
    int chi=2*cur,tmp=0;
    if(chi<=sum)
        if(s[chi] JUDGE s[cur]){
            tmp=s[chi];
            s[chi]=s[cur];
            s[cur]=tmp;
        }
    adjustHeap(s,chi,sum);
    chi++;
    if(chi<=sum)
        if(s[chi] JUDGE s[cur]){
            tmp=s[chi];
            s[chi]=s[cur];
            s[cur]=tmp;
        }
    adjustHeap(s,chi,sum);
}

void heapSort(int *s,int n){
	for(int i=(n-1)/2;i>=0;i--){
		adjustHeap(s,i,n);
		print(s,n);
	}
	
}

void print(int *s,int n){
	for(int i=0;i<=n;i++){
		printf("%d ",s[i]);
	}
	puts("");
}

int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[n];
	while(i<n){
		scanf("%d",&arr[i++]);
	}
	printf("This is the original array\n");
	print(arr,n-1);
	heapSort(arr,n-1);
}
