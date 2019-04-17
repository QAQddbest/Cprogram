#include "headFile.h"
/**
    @auther :丁丁丁你又喝醉了
    @email :QAQddbest@outlook.com
    @todo :实现顺序存储二叉树的前中后序遍历的递归与非递归版本
    @description :对于不存在的节点,一定要输入999999作为代替,且最后一位一定不是空节点
    @time: 2019.04.13
*/
int main(){
    int n=0;//树的长度
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
