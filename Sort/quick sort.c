void quickSort(int *array,int left,int right){
    if(left < right){
        int i=left,j=right,x=array[left];
        while(i<j){
            while(i<j && array[j]>=x)//从右到左找到第一个小于x的数
                j--;
            if(i<j)
                array[i++]=array[j];
            while(i<j && array[i]<=x)//从左往右找到第一个大于x的数
                i++;
            if(i<j)
                array[j--]=array[i];
        }
        array[i]=x;//i = j的时候，将x填入中间位置
        quickSort(array,left,i-1);//递归调用
        quickSort(array,i+1,right);
    }
}
