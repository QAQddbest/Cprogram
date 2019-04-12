void selectionSort(int *array,int length){//改进版选择排序:记录比第一位小的数 的位置,最后交换
    int current,judge,middle,address;
    for(current=0;current<length-1;current++){
        address=current;
        for(judge=current+1;judge<length;judge++){
            if(array[judge]<array[address])
                address=judge;
        }
        if(address!=current){
            middle=array[address];
            array[address]=array[current];
            array[current]=middle;
        }
    }
}
