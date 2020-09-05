#include <stdio.h>

int Answer;

int numSet(int x)
{
	int temp=0;
	
	int i;
	for(i=1;i<=x;i++)
	{
		if(x%i == 0) temp += i;
	}
	
	return temp;
}

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;
		
		int a,b;
		scanf("%d %d", &a, &b);
		
		int i;
		for(i=a;i<=b;i++)
		{
			Answer += numSet(i);
		}
        
		printf("Case #%d\n", test_case+1);
	    printf("%d\n", Answer);
	}

	return 0;
}
