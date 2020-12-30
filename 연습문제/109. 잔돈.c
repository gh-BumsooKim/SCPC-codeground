#include <stdio.h>

char *Answer;

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
        int coin;
        scanf("%d",&coin);
        
        int a,b,c,d;
        a=coin/500;
        coin%=500;
        b=coin/100;
        coin%=100;
        c=coin/50;
        coin%=50;
        d=coin/10;
        
        char temp[4];
        printf(temp,"%d %d %d %d",d,c,b,a);
        Answer = temp;
        
		printf("Case #%d\n", test_case+1);
		printf("%s\n", Answer);
	}

	return 0;
}

