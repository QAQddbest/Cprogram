/**
注意!!!!!!!!!!!!!!!woc!!!!!!!!!!!!!!!!!!!!!!!
失败!!!!!!!!!!!!!!!!
有问题,mergearray函数!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
------2018.11.21.17:53

再次尝试,今天是个好日子,肯定做出来
1--mergearray已经正常运行
------2018.11.22.15:00

再次修改,下午状态不佳,还跑去玩滑板.
晚自习好好肝
(目前mergesort还没正常运转)

检测出问题!mergeArray函数,无法处理单元素

处理完成,问题很傻逼---循环错误
------2018.11.22.19:10
*/
void mergeArray(int *array,int beg1,int end1,int beg2,int end2){//功能:将数组array的第beg1到end1的数与beg2到end2的数按从小到大合并
    int use1=0,len=end2-beg1+1,tem[len],keep=beg1;
    while(beg1<=end1&&beg2<=end2){
        if(array[beg1]<array[beg2]){
            tem[use1++]=array[beg1++];
        }else{
            tem[use1++]=array[beg2++];
        }
    }
    if(beg1>end1&&beg2<=end2){//这情况是:beg1的已经排完了,beg2还没有
        while(beg2<=end2){
            tem[use1++]=array[beg2++];
        }
    }else if(beg1<=end1&&beg2>end2){//与上面相反
        while(beg1<=end1)
            tem[use1++]=array[beg1++];
    }else{//都排完了
        return;
    }
    for(use1=0;use1<len;use1++){
        array[keep++]=tem[use1];
    }
}
void mergeSort(int *arr,int beg,int end){//将从beg到end的数组排序好->拆为两个排序好
//    printf("\tdoing merge Sort,beg=%d,end=%d\n",beg,end);
    if(end==beg){
        return;
    }
    else if(end-beg==1){
        int min=arr[beg];
        if(min>arr[end]){
            arr[beg]=arr[end];
            arr[end]=min;
        }
    }
    else{
        int mid=(end+beg)/2;
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        mergeArray(arr,beg,mid,mid+1,end);
    }
//    printf("\nThis is processed array\n");
//    printArray(arr);
//    printf("\tfinish\n");
}
