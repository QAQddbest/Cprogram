
void bubbleSort(int *array,int size){//�Ľ���ð��˼·:���ϱȽ��������ڵ� ��,������Ƶ�����,����С���Ƶ�ǰ��
    int outter,inner,middle;
    for(outter=0;outter<size;outter++){
        for(inner=outter;inner<size-outter;inner++){
            if(array[inner]>array[inner+1]){
                middle=array[inner];
                array[inner]=array[inner+1];
                array[inner+1]=middle;
            }
            if(array[size-inner]<array[size-inner-1]){
                middle=array[size-inner];
                array[size-inner]=array[size-inner-1];
                array[size-inner-1]=middle;
            }
        }
    }
}
