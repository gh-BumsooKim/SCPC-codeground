#include <stdio.h>

int Answer = 0;

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	int a,b,c;
	int i;
	
	for(test_case = 0; test_case < T; test_case++)
	{
		scanf("%d %d %d", &a,&b,&c);
		
		for(i=0; i<=b; i++)
		{
			if( a >= 2*i && b >= i && c >= 3*i) Answer = i;
		}
        
		printf("Case #%d\n", test_case+1);
	        	printf("%d\n", Answer);
	}

	return 0;
}
