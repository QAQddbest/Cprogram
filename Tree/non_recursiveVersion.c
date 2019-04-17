#define UN -1
NRV_PreOrder(int *T,int n){
    int sta[n];//存入节点的下标!!!!!!
    int i=0,cur=0;//i指向当前栈顶下标+1;    cur指向当前树的节点
    sta[i++]=cur;
    while(i!=0){
        i--;
        if(T[sta[i]]==UN){
            continue;
        }
        cur=sta[i];//复原!!!
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
        while(cur<n&&T[cur]!=UN){//只要cur这一节点有左子树,就继续遍历
            sta[i++]=cur;
            cur=2*cur+1;
        }
        if(i!=0){//确保其不为空
            cur=sta[--i];       //ATENTION!!!       出栈了父节点,让节点回退
            printf("%d ",T[cur]);
            if((cur=cur*2+2)<n&&T[cur]!=UN){//如果有右子树,则变去右子树

            }
        }

    }
}
NRV_PostOrder(int *T,int n){
    int sta[n];
    int i=0,cur=0;
    int last;
    do{
        while((cur*2+1)<n){//同样,先把能访问的左子树都访问一遍
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
