#include<stdio.h>
int main()
{

    int n,index,temp,count=0,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        while(1)
        {


        scanf("%d",&a[count]);
        //count++;
        if(a[count]<0) break;
        count++;
        }
    // printf("count=%d\n",count);
    for(int k=0;k<count;k++)
    {
        index=k;
        for(int q=k+1;q<count+1;q++)
        {
            if(a[q]<a[index]) index=q;
            temp=a[index];
            a[index]=a[k];
            a[k]=temp;
        }
    }

    printf("max=%d\n",a[count]);
    }
}
