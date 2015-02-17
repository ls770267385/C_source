#include <stdio.h>

void merge(int *arr,int p,int q,int r);
void merge_sort(int *arv,int p,int r);

int main()
{

    int a[9]={9,2,11,23,0,13,21,33,3};
    int r;

    merge_sort(a,0,8);
    for(r=0;r<9;r++)
    {
        printf("%d ",a[r]);
    }
    return 0;
}

void merge(int *arr,int p,int q,int r)
{
    int n1=r-q;
    int n2=q-p+1;
    int i,m=0,n=0;
    int L[n1+1],H[n2+1];

    for(i=0;i<n1;i++)
        L[i]=arr[q+i+1];
    for(i=0;i<n2;i++)
        H[i]=arr[p+i];
        H[n2]=L[n2]=10000;
    for(i=p;i<r+1;i++)
    {
        if(L[m]>H[n])
        {
            arr[i]=H[n];
            n++;
        }
        else
        {
            arr[i]=L[m];
            m++;
        }

    }
}
void merge_sort(int *arv,int p,int r)
{
    int q;

    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(arv,p,q);
        merge_sort(arv,q+1,r);
        merge(arv,p,q,r);
    }

}

