void shellSort(int *array,int len){
	int temp,use1;
//	printf("\n###����Ϊ%d###\n",len);
	int plus,current,next;
	for(plus=len/2;plus>=1;plus/=2){
//		printf("\n||������Ϊ%d||",plus);
		for( current = plus ; current < len ; current++){
			temp=array[current];
			next=current-plus;
			while(next>=0&&temp<array[next]){
				array[next+plus]=array[next];
				next-=plus;
			}
			array[next+plus]=temp;
		}
//		puts("\n||һ��shellѭ���������õ�||");
//		for(use1=0;use1<NUM;use1++){
//		printf(" %d ",array[use1]);
//	}
	}
}
