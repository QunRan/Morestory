#include <stdio.h>
#include <math.h>
#define SIZE 100
int search(int);
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
        if(search(a[number])!=0)
        {
            b[count++]=a[number];
        }
    }
}
int search(int tran,int number,int a[])
{
    int ret=0;
    for(int i;i<number;i++)
    {
        if(a[i]==tran)
        {
        ret=1;
        break;
        }
    }
    return ret;
}
