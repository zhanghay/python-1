#include<stdio.h>
int main()
{
	int data[2][13]={{0,31,29,31,30,31,30,31,31,30,31,30,31},{0,31,28,31,30,31,30,31,31,30,31,30,31}};
	int year,month,day;
	int i,j,k,l;
	while(scanf("%d %d %d",&year,&month,&day)!=EOF)
	{
		int sum=0;
		int m,n;
	//	if(year<10000)
	//	{
		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			m=0;
		}
		else m=1;
	
		if(m==0)
		{
			n=0;
			for(j=1;j<=month-1;j++)
			{
				sum=sum+data[n][j];

			}
			sum=sum+day;
		}
		if(m==1)
		{
			n=1;
			for(j=1;j<=month-1;j++)
			{
				sum=sum+data[n][j];

			}
			sum=sum+day;
		}
		printf("%d\n",sum);


	}
	return 0;
}