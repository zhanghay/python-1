#include <cstdio>
#define max_n 100000+10
int main()
{
	int pos = 0,ans = 0, n, k, tank, dis;
	int loc[max_n];

	scanf("%d %d",&n,&k);

	for(int i = 1;i <= k + 1;i++){
		scanf("%d",&loc[i]);
	}

	tank = n;
	ans++;

	if(tank < loc[1]){
        printf("No Solution!\n");
        return 0;
	}

	for(int i = 1;i <= k + 1;i++){
        tank -= loc[i];
        if(tank < loc[i]){
            tank += n;
            ans++;
           // printf("add fuel on %d\n",i-1);
        }
	}
	if(tank < 0){
        printf("No Solution!\n");
        return 0;
	}

	printf("%d\n",ans);

	return 0;
}
