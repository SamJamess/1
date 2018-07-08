#include<stdio.h>

void bubbleSort(int x[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
            {
            if(x[j]>x[j+1])
                {
                    int temp=x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;
                }

            }

    }
}

int main(){
    int a[5];
    printf("plz input 5 numbers:\n");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    //printf("\n");
    printf("we got: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
        }
    printf(" in array(a)\n\n\n");

    bubbleSort(a);

    printf("after bubble sort,we now have: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
        }

    printf(" in array(a)\n\n\n");
   return 0;
}


