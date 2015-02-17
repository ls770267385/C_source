#include <stdio.h>
#define SIZE 8
void build_max_heap(int *arr);
void max_heapify(int *arr,int i);
void heap_sort(int *arr);
int right_child(int i);
int left_child(int i);

int main()
{
    int i;
    int a[SIZE+1]={SIZE,3,4,6,11,2,4,6,7};//heapsize

    heap_sort(a);
    for(i=1;i<SIZE+1;i++)
        printf("%d ",a[i]);

    return 0;
}

void build_max_heap(int *arr)
{
    int i;
    for(i=SIZE/2;i>0;i--)
        max_heapify(arr,i);
 //   for(i=1;i<9;i++)
  //      printf("%d ",arr[i]);
   // printf("\n");
}

void max_heapify(int *arr,int i)
{
    int max,m;
    int l=left_child(i);
    int r=right_child(i);

    if(l<=arr[0]&&arr[l]>arr[i])
        max=l;
    else
        max=i;
    if(r<=arr[0]&&arr[r]>arr[max])
        max=r;
    if(i!=max)
    {
        m=arr[max];
        arr[max]=arr[i];
        arr[i]=m;
        max_heapify(arr,max);
    }
 //   printf("%d\n",arr[0]);
}



void heap_sort(int *arr)
{
    int i,m;

    build_max_heap(arr);
   // printf("%d\n",arr[0]);
    for(i=arr[0];i>1;i--)
    {
        m=arr[i];
        arr[i]=arr[1];
        arr[1]=m;
        arr[0]=arr[0]-1;
        max_heapify(arr,1);
    }

}

int left_child(int i)
{
    return(2*i);
}

int right_child(int i)
{
    return (2*i+1);
}
