#include <cstdio>
#include <cmath>
void Fun(long long int Zr,long long int Mr)
{
   // printf("Zr = %lld Mr = %lld\n",Zr,Mr);
    long long int one = Zr;
    if(fabs(Zr) == fabs(Mr))
        printf("%lld",Zr/Mr);

    else if(Zr < 0 && fabs(Zr)!=fabs(Mr)){
        if(Mr != 1 )
            one = -(fabs(Zr) / Mr + 1);

        printf("%lld",one);
        if(Zr % Mr == 0){
            printf("\n");
            return;
        }
        Zr = fabs(one) * Mr - fabs(Zr);
        long long int temp = Zr,Xs;Zr = Mr;Mr = temp;
        Xs= Zr / Mr;
        printf(" %lld",Xs);
        if(Zr % Mr !=0){
        while(Mr != 1){
        long long int temp_ = Mr;
        Mr = Zr % Mr;
        Zr= temp_;
        if(Mr == 0)
            break;
        printf(" %lld",Zr / Mr);
        }
        }
   }
   else if(Zr > 0){
        one = Zr / Mr;

        printf("%lld",one);
        if(Zr % Mr == 0){
            printf("\n");
            return;
        }
        Zr = Zr - one * Mr;
        long long int temp = Zr,Xs;Zr = Mr;Mr = temp;
        Xs= Zr / Mr;
        printf(" %lld",Xs);
        if(Zr % Mr != 0){
        while(Mr != 1){
        long long int temp_ = Mr;
        Mr = Zr % Mr;
        Zr= temp_;
        if(Mr == 0)
            break;
        printf(" %lld",Zr / Mr);
        }
        }
   }
   printf("\n");
   return;
}
int main()
{
    int n1,n2,T = 1;
	while(scanf("%d %d",&n1,&n2) != EOF){
        if(n1 == 0 && n2 == 0)
            return 0;

		long long int A[25000],B[25000],numerator,denominator,Zr,Mr,Zr1,Mr1,Zr2,Mr2; //numerator stands for fenzi,denominator stands for fenmu

		for(int i = 0;i < n1;i++)
			scanf("%lld",&A[i]);
		for(int i = 0;i < n2;i++)
			scanf("%lld",&B[i]);

		long long int numerator1,numerator0,denminator1,denminator0,r1,r2,R1,R2;
		numerator1 = 1;
		denminator1 = A[n1-1];

		for(int i = n1 - 2;i >= 0;i--){
			numerator0 = A[i] * denminator1 + numerator1;
			denminator0 = denminator1;
			if(i != 0){
				long long int tmp ;
				tmp = numerator0;
				numerator0 = denminator0;
				denminator0 = tmp;
			}
			denminator1 = denminator0;
			numerator1 = numerator0;
		} Zr1 = numerator1; Mr1 = denminator1;

		numerator1 = 1;
		denminator1 = B[n2-1];
		for(int i = n2 - 2;i >= 0;i--){
			numerator0 = B[i] * denminator1 + numerator1;
			denminator0 = denminator1;
			if(i != 0){
				long long int tmp ;
				tmp = numerator0;
				numerator0 = denminator0;
				denminator0 = tmp;
			}
			denminator1 = denminator0;
			numerator1 = numerator0;
		} Zr2 = numerator1; Mr2 = denminator1;

	//	printf("%lld/%lld %lld/%lld\n",Zr1,Mr1,Zr2,Mr2);
		Zr1 = Mr2 * Zr1; Zr2 = Mr1 * Zr2;
	    Mr1 = Mr1 * Mr2; Mr2 = Mr1;

	    printf("Case %d:\n",T);//Fun(n1,n2);
	    T++;
	    for(int i = 1;i <= 4;i++){
            if(i == 1){
                Zr = Zr1 + Zr2;
                Mr = Mr1;
                Fun(Zr,Mr);
            }
            if(i == 2){
                Zr = Zr1 - Zr2;
                Mr = Mr1;
                Fun(Zr,Mr);
            }
            if(i == 3){
                Zr = Zr1 * Zr2;
                Mr = Mr1 * Mr2;
                Fun(Zr,Mr);
            }
            if(i == 4){
                Zr = Zr1 * Mr2;
                Mr = Zr2 * Mr1;
                Fun(Zr,Mr);
            }
	    }

	}

	return 0;
}
