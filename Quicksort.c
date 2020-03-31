#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low - 1);

    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low,int high)
{
    if (low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);

}
int main()
{
	    int n;
	    printf("Enter the number of elements\n");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter the elements\n");
	    for(int i=0;i<n;i++)
        {
	         scanf("%d",&arr[i]);
        }
        clock_t start, end;
        double cpu_time_used;
        start=clock();
	    quicksort(arr,0,n-1);
        end=clock();
        cpu_time_used=((double) (end - start))/CLOCKS_PER_SEC;
	    printf("Sorted array:\n");
	    printArray(arr,n);
        printf("Sorting took %f seconds to execute \n",cpu_time_used);
	    return 0;
}
