#include <stdio.h>
#include <malloc.h>

typedef struct myList
        {
            int num;
        }List;

List * InitList(int n);//建立线性表
List * ListMerge(List*La,List*Lb,int n,int m);//排序
void GetElem(List * L,int i,int * e);
void ListInsert(List * L,int i,int e);
int main(void)
 {
     int i,n,m;
     List *La,*Lb,*Lc;
     La=InitList(10);
     Lb=InitList(10);
     for(i=0,n=1,m=2;i<10;i++,n+=2,m+=2)
     {
         La[i].num=n;
         Lb[i].num=m;

     }
     Lc=ListMerge(La,Lb,10,10);
     for(i=0;i<20;i++)
        printf("%d ",Lc[i].num);

    return 0;

 }

 List * InitList(int n)
 {
     return (List*)malloc(n*sizeof(List));
 }

 List * ListMerge(List*La,List*Lb,int n,int m)
 {
     List * Lc;
     int j=0,i=0,k=0;
     int ai,bj;
     Lc=(List*)malloc((n+m)*sizeof(List));
     while((i<m)&&(j<n))
     {

        GetElem(La,i,&ai);
        GetElem(Lb,j,&bj);
         if(ai<bj)
         {
             ListInsert(Lc,k++,ai);
             i++;
         }
         else
         {
             ListInsert(Lc,k++,bj);
             j++;
         }
     }
     while(i<m)
     {
        GetElem(La,i++,&ai);
        ListInsert(Lc,k++,ai);
     }
     while(j<n)
     {
        GetElem(Lb,j++,&bj);
        ListInsert(Lc,k++,bj);
     }

    return Lc;
 }

 void GetElem(List * L,int i,int * e)
 {
     *e=L[i].num;

 }
 void ListInsert(List * L,int i,int e)
 {
     L[i].num=e;
 }


