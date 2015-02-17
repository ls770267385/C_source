#include <stdio.h>

void quick_sort(int *arr,int low,int high);
int partition(int *arr,int low,int high);

int main()
{
    int arr[8]={3,5,4,6,11,13,43,20};
    int i;
    quick_sort(arr,0,7);
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

void quick_sort(int *arr,int low,int high)
{
    int i;
    if(low<high)
    {
        i=partition(arr,low,high);
        quick_sort(arr,low,i-1);
        quick_sort(arr,i+1,high);
    }


}

int partition(int *arr,int low,int high)
{
    int i=low-1;
    int j,m,key=arr[high];
    for(j=low;j<high;j++)
    {
        if(arr[j]<key)
        {
           i++;
           m=arr[i];
           arr[i]=arr[j];
           arr[j]=m;
        }

    }
    arr[high]=arr[i+1];
    arr[i+1]=key;
    return (i+1);
}
