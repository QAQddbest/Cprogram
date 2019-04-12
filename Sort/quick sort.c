void quickSort(int *array,int left,int right){
    if(left < right){
        int i=left,j=right,x=array[left];
        while(i<j){
            while(i<j && array[j]>=x)//���ҵ����ҵ���һ��С��x����
                j--;
            if(i<j)
                array[i++]=array[j];
            while(i<j && array[i]<=x)//���������ҵ���һ������x����
                i++;
            if(i<j)
                array[j--]=array[i];
        }
        array[i]=x;//i = j��ʱ�򣬽�x�����м�λ��
        quickSort(array,left,i-1);//�ݹ����
        quickSort(array,i+1,right);
    }
}
