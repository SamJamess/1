#include<stdio.h>
#include<string.h>
int main(){
   //strlen()��������ȡ�ַ���\0֮ǰ���ַ�������
   /* char str[10];
    gets(str);
    int len =strlen(str);
    printf("%d\n",len);
   */

   //strcmp()�������Ƚ������ַ����ֵ����С
   /*
   char str1[50],str2[20];
   gets(str1);
   gets(str2);
   int cmp = strcmp(str1,str2);
   if(cmp<0) printf("str1<str2");
   else if(cmp>0)printf("str1>str2");
   else printf("str1==str2");
    */

   //strcpy()����������һ�ַ������ݸ��Ƹ�ǰһ�ַ�����
    /*
   char str1[50],str2[50];
   gets(str1);
   gets(str2);
   strcpy(str1,str2);
   puts(str1);
    */

    //strcat()����������һ�ַ������ݼ޽ӵ�ǰһ�ַ����󷽣�
    /*
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    */

    //sscanf()���������ַ�����������ĳ�ָ�ʽд�����Ĳ����У�
    /*
    int n;
    char str[100]="12345678";
    sscanf(str,"%d",&n);
    printf("%d\n",n);
    */

    //sprintf()�������ѵ���������ĳ�ָ�ʽд���ַ������У�
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
