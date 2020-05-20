#include "stdio.h"
#include<string.h>
void main()
{
    int a=0,b=0,c; 
    printf("请输入字符串,输入完毕后回车+（Ctrl+z）+回车可查看答案\n") ; 
    while((c=getchar())!=EOF)
    {
       if(c==' '||c==',')
       {  
       a++;//单词数加一 
       }
       b++;//字符数加一  
    } 
    printf("单词数为%d\n字符数为%d\n",a+1,b-1);
}

