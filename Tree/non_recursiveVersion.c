#define UN -1
NRV_PreOrder(int *T,int n){
    int sta[n];//����ڵ���±�!!!!!!
    int i=0,cur=0;//iָ��ǰջ���±�+1;    curָ��ǰ���Ľڵ�
    sta[i++]=cur;
    while(i!=0){
        i--;
        if(T[sta[i]]==UN){
            continue;
        }
        cur=sta[i];//��ԭ!!!
        printf("%d ",T[sta[i]]);
        if((cur=2*cur+2)<n)
            sta[i++]=cur;
        if((cur=cur-1)<n)
            sta[i++]=cur;
    }
}
NRV_InOrder(int *T,int n){
    int sta[n];
    int i=0,cur=0;
    while(i!=0||cur<n){
        while(cur<n&&T[cur]!=UN){//ֻҪcur��һ�ڵ���������,�ͼ�������
            sta[i++]=cur;
            cur=2*cur+1;
        }
        if(i!=0){//ȷ���䲻Ϊ��
            cur=sta[--i];       //ATENTION!!!       ��ջ�˸��ڵ�,�ýڵ����
            printf("%d ",T[cur]);
            if((cur=cur*2+2)<n&&T[cur]!=UN){//�����������,���ȥ������

            }
        }

    }
}
NRV_PostOrder(int *T,int n){
    int sta[n];
    int i=0,cur=0;
    int last;
    do{
        while((cur*2+1)<n){//ͬ��,�Ȱ��ܷ��ʵ�������������һ��
            sta[i++]=cur;
            cur=cur*2+1;
        }
        last=0;
        while(i!=0&&cur==sta[i-1]){
            cur=sta[i-1];
            if((cur*2+2)>=n||(cur*2+2)==last){
                printf("%d ",T[cur]);
                cur=sta[--i];
                last=cur;
            }else{
                cur=cur*2+2;
                break;
            }
        }





    }while(i!=0);
}
