#include <stdio.h>

int Answer;

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;
		
		int num;
		scanf("%d",&num);
		
		while(1)
		{
			if(num == 1) break;
			
			if(num%2 == 1) Answer += 1;
			num/=2;
		}
		
		printf("Case #%d\n", test_case+1);
	    printf("%d\n", Answer+1);
	}

	return 0;
}
