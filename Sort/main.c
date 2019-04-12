/**
auther:丁志鹏
name:排序总结
本项目将所有排序算法囊括,并将排序函数分到不同文件中,由main函数控制;
数据较少,建议使用insertionsort,selectionsort
数据较多,推荐使用quicksort,heapsort,mergesort
数据杂乱随机分布,使用quicksort
*/
#include "sort.h"
#define RUN
void printArray(int *arr){
	int len;
	for(len=0;len<NUM;len++){
		printf(" %d ",arr[len]);
	}
	puts("");
}
int main(){
    #ifdef RUN
    int arrayOfBubbleSort[NUM],arrayOfQuickSort[NUM],arrayOfSelectionSort[NUM],arrayOfInsertionSort[NUM],arrayOfShellSort[NUM],arrayOfHeapSort[NUM],arrayOfMergeSort[NUM];
    int use1;
    srand(time(NULL));
    printf("This is the original array\n");
    for(use1=0;use1<NUM;use1++){
        arrayOfQuickSort[use1]=1+(int)(190.0*rand()/(RAND_MAX+1.0));
        arrayOfBubbleSort[use1]=arrayOfQuickSort[use1];
        arrayOfSelectionSort[use1]=arrayOfBubbleSort[use1];
        arrayOfInsertionSort[use1]=arrayOfSelectionSort[use1];
        arrayOfShellSort[use1]=arrayOfSelectionSort[use1];
        arrayOfHeapSort[use1]=arrayOfShellSort[use1];
        arrayOfMergeSort[use1]=arrayOfHeapSort[use1];
        printf(" %d ",arrayOfQuickSort[use1]);
    }
    quickSort(arrayOfQuickSort,0,NUM-1);
    printf("\nThis is the quickSort-processed array:\n");
    printArray(arrayOfQuickSort);

    bubbleSort(arrayOfBubbleSort,NUM-1);
    printf("This is the bubbleSort-processed array:\n");
    printArray(arrayOfBubbleSort);

    selectionSort(arrayOfSelectionSort,NUM);
    printf("This is the selectionSort-processed array:\n");
    printArray(arrayOfSelectionSort);

    insertionSort(arrayOfInsertionSort,NUM);
    printf("This is the insertionSort-processed array:\n");
    printArray(arrayOfInsertionSort);

    shellSort(arrayOfShellSort,NUM);
    printf("This is the shellSort-processed array:\n");
    printArray(arrayOfShellSort);

    heapSort(arrayOfHeapSort,NUM-1);
    printf("This is the heapSort-processed array:\n");
    printArray(arrayOfHeapSort);

    mergeSort(arrayOfMergeSort,0,NUM-1);
    printf("This is the mergeSort-processed array:\n");
    printArray(arrayOfMergeSort);

    #endif
    //用于检验运行正常
#ifdef TEST
    int arr[NUM]={1,34,45,7,2,3,6,8,10,11};
    mergeSort(arr,0,9);
    printf("Here comes the result!\n");
    printArray(arr);
#endif // OK
}
