void insertionSort(int *array,int length){//插入排序的优化版
    int current,temporary,datum,*p;
    if(length==1)//判断传入数组是否为单元素数组,若是,直接停止
        return;
    if(array[0]>array[1]){
        temporary=array[1];
        array[1]=array[0];
        array[0]=temporary;
    }
    if(length==2)//若数组只有两个元素,后面不必执行,直接返回
        return;
    for(current=2;current<length;current++){//从第三个元素开始遍历到最后一个元素
        if(array[current]<array[current-1]){//前current-1个元素组成的数组是已经排好序的,所以最大的元素在current-1位,这里判断需不需要移位
            datum=current-1;
            while(array[datum]>array[current]&&datum>=0)//用datum来记录刚好比它大的元素的位置
                datum--;
            datum++;
            temporary=array[current];//先保存好该元素,后面会覆盖
            p=&array[current];
            for(datum;datum<current;datum++){
                *p=*(p-1);
                p--;
            }
            *p=temporary;
        }
    }
}
