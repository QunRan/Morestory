#include <stdio.h>
#define SIZE 100
int search(int,int,int);
int main(int argc, char **argv) 
{
    int a[SIZE]={0},*p=a,i=0,n=0,number=0,b[SIZE]={0},count=0;
    printf("How many numbers do you want enter?:");
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i++]);
    }
    for(;number<n;number++)
    {
        int tran=a[number];
        if(search(tran,number,a[SIZE])==0)
        {
            b[count++]=a[number];
        }
    }
    for(int num=0;num<count;num++)
    {
        printf("%d ",b[num]);
    }
    printf("\b");
}
int search(int tran,int number,int a[SIZE])
{
    int ret=0;
    for(int i=0;i<number;i++)
    {
        if(a[i]==tran)
        {
        ret=1;
        break;
        }
    }
    return ret;
}
