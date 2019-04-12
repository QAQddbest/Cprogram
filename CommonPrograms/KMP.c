#include <stdio.h>
#include <string.h>
#define MAX 50
void print(int *,const int);
void getNext(char *,int *);
int KMP(char *,char *);


int KMP(char *s,char *p){
	int *next=(int *)calloc(sizeof(int),MAX);
	getNext(p,next);
	const int slen=strlen(s);
	const int plen=strlen(p);
	printf("得到next数组为:\n");
	print(next,plen);
	int i=0,j=0;
	while(i<slen&&j<plen){
		if(j==-1||s[i]==p[j]){
			i++;
			j++;
		}else{
			j=next[j];
		}
	}
	if(j==plen){
		return i-j;
	}else{
		return -1;
	}
}

void getNext(char *p,int *next){
	const int plen=strlen(p);
	next[0]=-1;
	int j=0,k=-1;
	while(j<plen){
		if(k==-1||p[j]==p[k]){
			j++;
			k++;
			if(p[j]!=p[k]){
				next[j]=k;
			}else{
				next[j]=next[k];
			}
		}else{
			k=next[k];
		}
	}
}

void print(int *next,const int plen){
	for(int a=0;a<plen;a++){
		printf("%d\t",next[a]);
	}
	printf("\n");
}

int main(){
	char s[2*MAX];
	char p[MAX];
	int num;
	gets(s);
	gets(p);
	num=KMP(s,p);
	if(num!=-1)
		printf("子串\t%s\n在目标串\t%s\n首次出现的位置为\t%d\n",s,p,num);
	else
		printf("NONE!\n");
}