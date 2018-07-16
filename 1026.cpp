#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int n = ((b - a) + 50) / 100;
    printf("%d\n",n);
    int hour = n / 3600;
    printf("%d",hour);
    n = n % 3600;
    printf("%d\n",n);
    printf("60/100=%d\n",(60/100));
    int minute = n / 60, second = n % 60;
    printf("%d %d\n",minute,second);
    printf("%02d:%02d:%02d", hour, minute, second);
    return 0;
}
