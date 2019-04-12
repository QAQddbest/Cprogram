
void bubbleSort(int *array,int size){//改进版冒泡思路:不断比较两个相邻的 数,将大的移到后面,并将小的移到前面
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
