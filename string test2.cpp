#include<stdio.h>
#include<string.h>
int main(){
   //strlen()函数，获取字符串\0之前的字符个数。
   /* char str[10];
    gets(str);
    int len =strlen(str);
    printf("%d\n",len);
   */

   //strcmp()函数，比较两个字符串字典序大小
   /*
   char str1[50],str2[20];
   gets(str1);
   gets(str2);
   int cmp = strcmp(str1,str2);
   if(cmp<0) printf("str1<str2");
   else if(cmp>0)printf("str1>str2");
   else printf("str1==str2");
    */

   //strcpy()函数，将后一字符串内容复制给前一字符串；
    /*
   char str1[50],str2[50];
   gets(str1);
   gets(str2);
   strcpy(str1,str2);
   puts(str1);
    */

    //strcat()函数，将后一字符串内容嫁接到前一字符串后方；
    /*
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    */

    //sscanf()函数，将字符数组内容以某种格式写入最后的参数中；
    /*
    int n;
    char str[100]="12345678";
    sscanf(str,"%d",&n);
    printf("%d\n",n);
    */

    //sprintf()函数，把第三参数以某种格式写入字符数组中；
    /*
    int n=651321;
    char str[100]="12345678";
    sprintf(str,"%d",&n);
    printf("%s\n",str);
    */
    int n;
    double db;
    char str[100]="2048:3.14,hello",str2[100];
    sscanf(str,"%d:%lf,%s",&n,&db,str2);
    printf("n=%d,db=%.2f,str2=%s\n",n,db,str2);


    int n1=12;
    double db1=3.1415;
    char str4[100],str3[100]="good";
    sprintf(str4,"%d:%.2f,%s",n1,db1,str3);
    printf("str=%s\n",str);


    return 0;
}
