
#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
   char a[N];
   int i=0,re=0;
   printf("Enter a string:");
   gets(a);
   printf("New string:");
   while(a[i])       //����ȡ����������һ���ַ�֮�󣬶�ȡ��0������ѭ��
   {
       if(a[i]>='0'&&a[i]<='9'){
        printf("%c",a[i]);
        re=re*16+a[i]-'0';
       }          //a[i]-'0'����ASCII��ֵ��ֵ���λ��ֵ
       else if(a[i]>='a'&&a[i]<='f'){
        printf("%c",a[i]);
        re=re*16+a[i]+10-'a';
       }          //a[i]-'a'����ASCII��ֵ��ֵ���λ��ֵ
       else if(a[i]>='A'&&a[i]<='F'){
        printf("%c",a[i]);
        re=re*16+a[i]+10-'A';
       }          //a[i]-'A'����ASCII��ֵ��ֵ���λ��ֵ
       i++;       //�����λ��������һλ����
 
   }
   printf("\nnumber=%d",re);
   return 0;
}

