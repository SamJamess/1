#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void bubbleSort(int x[])
{
    for(int i=0;i<4;i++)
    {
        int j = 0,temp=0;
        while(j<4)
        {
            if (x[j]<x[j+1])
                {
                 j++;
                }
               else
                {
                temp=x[j+1];
                x[j+1]=x[j];
                x[j]=temp;
                j++;
                }
        }
    }
}
int main(){
    int a[5];
    printf("plz input 5 numbers:\n");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    //printf("\n");
    printf("now we got: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
        }
    printf(" in array(a)\n");

    bubbleSort(a);

    printf("after bubble sort: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
        }

    printf(" in array(a)");
   return 0;
}


