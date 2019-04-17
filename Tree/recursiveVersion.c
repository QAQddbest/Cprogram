#define UN -1
void RV_PreOrder(int *T,int n,int i){//i从0开始,是当前个数;n从1开始,是总数
    if(T[i]==UN||i>=n){
        return;
    }
    printf("%d ",T[i]);
    RV_PreOrder(T,n,2*i+1);
    RV_PreOrder(T,n,2*i+2);
}
void RV_InOrder(int *T,int n,int i){//i从0开始,是当前个数;n从1开始,是总数
    if(T[i]==UN||i>=n){
        return;
    }
    RV_InOrder(T,n,2*i+1);
    printf("%d ",T[i]);
    RV_InOrder(T,n,2*i+2);
}
void RV_PostOrder(int *T,int n,int i){//i从0开始,是当前个数;n从1开始,是总数
    if(T[i]==UN||i>=n){
        return;
    }
    RV_PostOrder(T,n,2*i+1);
    RV_PostOrder(T,n,2*i+2);
    printf("%d ",T[i]);
}
