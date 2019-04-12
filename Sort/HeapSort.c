#include <stdio.h>
#include <string.h>
#define JUDGE <     //更改这里的符号,即可改变排序方向
#define LOCA            //删除或者注释掉,即可正常运行

void adjustHeap(int *,int ,int);
void print(int *,int);

void adjustHeap(int *s,int cur,int sum){
    int chi=2*cur+1,tmp=0;
    if(chi<sum){//如果左孩子存在
        if(s[chi] JUDGE s[cur]){
            tmp=s[chi];
            s[chi]=s[cur];
            s[cur]=tmp;
            adjustHeap(s,chi,sum);
        //为什么右孩子子的判断要放在里面?:因为只有左孩子存在才有可能有右孩子
        chi++;
        if(chi<sum)
            if(s[chi] JUDGE s[cur]){
                tmp=s[chi];
                s[chi]=s[cur];
                s[cur]=tmp;
                adjustHeap(s,chi,sum);
            }
        }
    }
}

void heapSort(int *s,int n){
	for(int i=n/2-1;i>=0;i--){
		adjustHeap(s,i,n);//i为下标(从0开始) 而n为个数(从1开始)
#ifdef LOCAL
        print(s,n);
#endif // LOCAL
	}
    if(n!=1){
        int tmp=s[n-1];
        s[n-1]=s[0];
        s[0]=tmp;
        heapSort(s,n-1);
    }
}

void print(int *s,int n){
	for(int i=0;i<n;i++){
		printf("%d ",s[i]);
	}
	puts("");
}

int main(){
//#ifdef LOCAL
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//#endif // LOCAL
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[n];
	while(i<n){
		scanf("%d",&arr[i++]);
	}
	printf("This is the original array\n");
#ifdef LOCAL
    print(arr,n);
#endif // LOCAL
	heapSort(arr,n);
	printf("最后排序完成");
	print(arr,n);
}
