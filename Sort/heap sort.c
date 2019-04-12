void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void heapSort(int *arr,int end){
    int len=end+1,address,max;
    if(len==1)
        return;
    int use1;
    for(address=len/2-1;address>=0;address--){
            if(2*address+1<len){
                if(arr[2*address+1]>arr[address]){
                    max=arr[2*address+1];
                    arr[2*address+1]=arr[address];
                    arr[address]=max;
                }
            }
            if(2*address+2<len){
                if(arr[2*address+2]>arr[address]){
                    max=arr[2*address+2];
                    arr[2*address+2]=arr[address];
                    arr[address]=max;
                }
            }
    }
    swap(&arr[0],&arr[end]);
    heapSort(arr,end-1);
}
