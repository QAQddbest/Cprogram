#include "headFile.h"
/**
    @auther :���������ֺ�����
    @email :QAQddbest@outlook.com
    @todo :ʵ��˳��洢��������ǰ�к�������ĵݹ���ǵݹ�汾
    @description :���ڲ����ڵĽڵ�,һ��Ҫ����999999��Ϊ����,�����һλһ�����ǿսڵ�
    @time: 2019.04.13
*/
int main(){
    int n=0;//���ĳ���
    if(scanf("%d\n",&n)==EOF||n==0){
        return 0;
    }
    int tree[n];
    for(int i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    printf("This is the tree you have input:\n");
    printTree(tree,n);

    printf("\nRV_PreOrder:\n");
    RV_PreOrder(tree,n,0);
    printf("\nRV_InOrder:\n");
    RV_InOrder(tree,n,0);
    printf("\nRV_PostOrder:\n");
    RV_PostOrder(tree,n,0);

    printf("\n\nNRV_PreOrder:\n");
    NRV_PreOrder(tree,n);
    printf("\nNRV_InInder:\n");
    NRV_InOrder(tree,n);
    printf("\nNRV_PostInder:\n");
    NRV_PostOrder(tree,n);
}
