#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a, const void *b)
{
     return (*(int *)a-*(int *)b);/// 正的就是从小到大排 负的就是从大到小排
}
int main(){
	int s[5]={1,5,7,6,3};
	qsort(s,5,sizeof(int),cmp);
	for(int i=0;i<5;i++){
		printf("%d ",s[i]);
		}
}