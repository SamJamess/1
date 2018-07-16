#include<stdio.h>
int main(){
    int a[101],as[101],b[101],bs[101];
    int ad=0,bd=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&a[i],&as[i],&b[i],&bs[i]);
        if(as[i]==a[i]+b[i] && bs[i]!=a[i]+b[i]){ bd++;}
        else if(bs[i]==a[i]+b[i] && as[i]!=a[i]+b[i]){ ad++;}
    }
    printf("%d %d",ad,bd);
    return 0;

}
