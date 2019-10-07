#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int judge(int *);

/*主题模块*/ 
int main(int argc, char *argv[]) {
	cvNameWindow("Image");
	int a[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}},score=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	/* 消除模块 */
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(a[i][j]+a[i][j+1]+a[i][j+2]==3){
				if(j==1&&a[i][j]+a[i][j+1]+a[i][j+2]+a[i][j+3]+a[i][j+4]==3)
				score+=200;
				else
				score+=100;
			}
		}
		printf("\n");
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(a[j][i]+a[j][i+1]+a[j][i+2]==3){
				if(j==1&&a[j][i]+a[j][i+1]+a[j][i+2]+a[j][i+3]+a[j][i+4]==3)
				score+=200;
				else
				score+=100;
			}
		}
		printf("\n");
	}
	
	/* 分数显示模块 */
	printf("score: %d",score); 
	return 0;
}


