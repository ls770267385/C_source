/* a program of Insert_sort*/
#include <stdio.h>

void insert_sort(int * arv);

int main()
{

    int arr[5]={3,2,4,1,5};
    int m;
    insert_sort(arr);
    for(m=0;m<5;m++)
        printf("%d",arr[m]);

    return 0;

}

void insert_sort(int * arv)
{

    int i,j,n,key;
    for(i=1;i<5;i++)
    {

        key=arv[i];
        j=i-1;
        while(key>arv[j]&&j>=0)
        {

            arv[j+1]=arv[j];
            j--;
        }
        arv[j+1]=key;
    }
    for(n=0;n<5;n++)
    printf("%d",arv[n]);
}
