#include <stdio.h>

void insert_sort(int *arv);

int main()
{

    int m;
    int arr[6]={31,42,55,32,11,2};
    insert_sort(arr);
    for(m=0;m<6;m++)
        printf("%d ",arr[m]);

    return 0;

}

void insert_sort(int *arv)
{

    int i,j,key;
    for(i=1;i<6;i++)
    {
        j=i-1;
        key=arv[i];
        while(key>arv[j]&&j>=0)
        {
            arv[j+1]=arv[j];
            j--;
        }
        arv[j+1]=key;
    }
}
