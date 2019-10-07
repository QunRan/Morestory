#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) 
{
    char str[80],tmp;
    int i,j,len;
    gets(str);
    len=strlen(str)-1;
    for(i=0;i<len;i++)
    {
        j=0;
        for(;str[j]<'0'||str[j]>'9';j++);
        len--;
        for(;j<len+i;j++)
        {
            tmp=str[j];
            str[j]=str[j+1];
            str[j+1]=tmp;
        }
    }
   printf("%s",str);
}
