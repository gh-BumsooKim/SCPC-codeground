#include <stdio.h>

char *Answer;

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
		unsigned int temp;
        
        scanf("%d", &temp);
        
        if(temp >= 10000000) Answer = "DIAMOND";
        else if(temp >= 1000000 ) Answer = "GOLD";
        else if(temp >= 100000 ) Answer = "SILVER";
        else Answer = "NONE";
        
		printf("Case #%d\n", test_case+1);
	    printf("%s\n", Answer);
	}

	return 0;
}
