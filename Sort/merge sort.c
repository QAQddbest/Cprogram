/**
ע��!!!!!!!!!!!!!!!woc!!!!!!!!!!!!!!!!!!!!!!!
ʧ��!!!!!!!!!!!!!!!!
������,mergearray����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
------2018.11.21.17:53

�ٴγ���,�����Ǹ�������,�϶�������
1--mergearray�Ѿ���������
------2018.11.22.15:00

�ٴ��޸�,����״̬����,����ȥ�滬��.
����ϰ�úø�
(Ŀǰmergesort��û������ת)

��������!mergeArray����,�޷�����Ԫ��

�������,�����ɵ��---ѭ������
------2018.11.22.19:10
*/
void mergeArray(int *array,int beg1,int end1,int beg2,int end2){//����:������array�ĵ�beg1��end1������beg2��end2��������С����ϲ�
    int use1=0,len=end2-beg1+1,tem[len],keep=beg1;
    while(beg1<=end1&&beg2<=end2){
        if(array[beg1]<array[beg2]){
            tem[use1++]=array[beg1++];
        }else{
            tem[use1++]=array[beg2++];
        }
    }
    if(beg1>end1&&beg2<=end2){//�������:beg1���Ѿ�������,beg2��û��
        while(beg2<=end2){
            tem[use1++]=array[beg2++];
        }
    }else if(beg1<=end1&&beg2>end2){//�������෴
        while(beg1<=end1)
            tem[use1++]=array[beg1++];
    }else{//��������
        return;
    }
    for(use1=0;use1<len;use1++){
        array[keep++]=tem[use1];
    }
}
void mergeSort(int *arr,int beg,int end){//����beg��end�����������->��Ϊ���������
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
