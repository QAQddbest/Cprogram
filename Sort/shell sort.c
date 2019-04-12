void shellSort(int *array,int len){
	int temp,use1;
//	printf("\n###长度为%d###\n",len);
	int plus,current,next;
	for(plus=len/2;plus>=1;plus/=2){
//		printf("\n||递增量为%d||",plus);
		for( current = plus ; current < len ; current++){
			temp=array[current];
			next=current-plus;
			while(next>=0&&temp<array[next]){
				array[next+plus]=array[next];
				next-=plus;
			}
			array[next+plus]=temp;
		}
//		puts("\n||一次shell循环结束，得到||");
//		for(use1=0;use1<NUM;use1++){
//		printf(" %d ",array[use1]);
//	}
	}
}
