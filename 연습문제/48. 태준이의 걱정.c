#include <stdio.h>

int Answer;

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
        int a,b,d;
        scanf("%d %d %d", &a, &b, &d);
        
        int i=(d-a)/(a-b);
        int load=i*(a-b);
        
        while(1)
        {        	
        	load+=a;
        	if(load >= d)
			{
				Answer = i+1;
				break;
			}
        	load-=b;
        	i++;
		}
        
		printf("Case #%d\n", test_case+1);
		printf("%d\n", Answer);
	}

	return 0;
}
