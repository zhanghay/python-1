#include <stdio.h>
#include <string.h>
#define maxn 10+5

struct gift
{
    char name[10];
    int income;
};
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        struct gift s[maxn];
        for(int i=0;i<num;i++)
            s[i].income=0;

        for(int i=0;i<num;i++)
        {
            scanf("%s",s[i].name);
        }

        for(int i=0;i<num;i++)
        {
            char name1[10];
            int sum;int count;int permoney;

            scanf("%s",name1);
            scanf("%d %d",&sum,&count);
            if(count!=0)
                permoney=sum/count;
                else permoney=sum;
      //      printf("%d\n",permoney);

            for(int j=0;j<num;j++)
            {
                if(strcmp(name1,s[j].name)==0)
                {
                    s[j].income=s[j].income-sum+(sum-permoney*count);
                    break;
                }
            }

            for(int j=0;j<count;j++)
            {
                char name2[10];
                scanf("%s",name2);

                 for(int k=0;k<num;k++)
                {
                    if(strcmp(name2,s[k].name)==0)
                    {
                        s[k].income=s[k].income+permoney;
                        break;
                    }
                }
            }
        }

        for(int i=0;i<num;i++)
           {
               printf("%s ",s[i].name);
               //if(s[i].income<0)
                printf("%d\n",s[i].income);
             //  else
              //  printf("%d\n",(int)s[i].income);
           }
           printf("\n");

    }

    return 0;
}
