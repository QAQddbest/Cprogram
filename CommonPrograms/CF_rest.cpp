#include <stdio.h>
#include <string.h>
#define WORK
int main(){
	int n;
	scanf("%d",&n);
	int spe=0,mid=0,tmp=0,max=0;
	scanf("%d",&tmp);
	n--;
	if(tmp==1){
#ifdef LOCAL
		printf("Begin!\nJudging the number %d\n",tmp);
#endif
		spe++;
		while(n>0){
			n--;
			scanf("%d",&tmp);
			if(tmp==0)
				break;
			spe++;
		}
	}
#ifdef LOCAL
	printf("spe=%d\n",spe);
#endif
	while(n>0){
		scanf("%d",&tmp);
		n--;
		if(tmp==1){
			mid++;
			if(n==0){
				spe+=mid;
				if(mid>max)
					max=mid;
			}
		}else{
			if(mid>max)
				max=mid;
			mid=0;
		}
	}
	printf("%d\n",max>spe?max:spe);
}