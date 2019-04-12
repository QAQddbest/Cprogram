#include <stdio.h>
#include <string.h>
#define JUDGE <     //��������ķ���,���ɸı�������
#define LOCA            //ɾ������ע�͵�,������������

void adjustHeap(int *,int ,int);
void print(int *,int);

void adjustHeap(int *s,int cur,int sum){
    int chi=2*cur+1,tmp=0;
    if(chi<sum){//������Ӵ���
        if(s[chi] JUDGE s[cur]){
            tmp=s[chi];
            s[chi]=s[cur];
            s[cur]=tmp;
            adjustHeap(s,chi,sum);
        //Ϊʲô�Һ����ӵ��ж�Ҫ��������?:��Ϊֻ�����Ӵ��ڲ��п������Һ���
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
		adjustHeap(s,i,n);//iΪ�±�(��0��ʼ) ��nΪ����(��1��ʼ)
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
	printf("����������");
	print(arr,n);
}
