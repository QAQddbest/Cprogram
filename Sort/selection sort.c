void selectionSort(int *array,int length){//�Ľ���ѡ������:��¼�ȵ�һλС���� ��λ��,��󽻻�
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
