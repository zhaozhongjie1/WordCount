#include "stdio.h"
#include<string.h>
void main()
{
    int a=0,b=0,c; 
    printf("�������ַ���,������Ϻ�س�+��Ctrl+z��+�س��ɲ鿴��\n") ; 
    while((c=getchar())!=EOF)
    {
       if(c==' '||c==',')
       {  
       a++;//��������һ 
       }
       b++;//�ַ�����һ  
    } 
    printf("������Ϊ%d\n�ַ���Ϊ%d\n",a+1,b-1);
}

