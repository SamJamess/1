#include<stdio.h>
#include<string.h>
int main(){
    int a[101];
//    memset(a,0,sizeof(a));
    int N,M;
    scanf("%d%d",&N,&M);
    M=M%N;
    int count1=0;
    int NminuM=N-M+1;
    int pir=N-M;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    if(M==0)
    {   int count2=0;

            for(int l=1;l<=N;l++)
            {
            if(count2==N-1)
                {
                printf("%d",a[N]);
                }
            else
                {
                printf("%d ",a[l]);
                count2++;
                }
            }
    }
    else
    {
        for(int j=1;j<=M;j++)
            {
            printf("%d ",a[NminuM]);
            count1++;
            NminuM++;
            }
        for(int k=1;k<=pir;k++)
            {
            if(count1==N-1)
                {
                printf("%d",a[pir]);
                }
            else
                {
                printf("%d ",a[k]);
                count1++;
                }
            }
    }
    return 0;
}
