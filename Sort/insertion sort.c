void insertionSort(int *array,int length){//����������Ż���
    int current,temporary,datum,*p;
    if(length==1)//�жϴ��������Ƿ�Ϊ��Ԫ������,����,ֱ��ֹͣ
        return;
    if(array[0]>array[1]){
        temporary=array[1];
        array[1]=array[0];
        array[0]=temporary;
    }
    if(length==2)//������ֻ������Ԫ��,���治��ִ��,ֱ�ӷ���
        return;
    for(current=2;current<length;current++){//�ӵ�����Ԫ�ؿ�ʼ���������һ��Ԫ��
        if(array[current]<array[current-1]){//ǰcurrent-1��Ԫ����ɵ��������Ѿ��ź����,��������Ԫ����current-1λ,�����ж��費��Ҫ��λ
            datum=current-1;
            while(array[datum]>array[current]&&datum>=0)//��datum����¼�պñ������Ԫ�ص�λ��
                datum--;
            datum++;
            temporary=array[current];//�ȱ���ø�Ԫ��,����Ḳ��
            p=&array[current];
            for(datum;datum<current;datum++){
                *p=*(p-1);
                p--;
            }
            *p=temporary;
        }
    }
}
