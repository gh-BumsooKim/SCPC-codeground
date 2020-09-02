#include <stdio.h>

int main(void)
{
    char *Answer;
	int T, test_case;
	
	setbuf(stdout, NULL);
    
	scanf("%d", &T);
	
	int temp;
	int a,b,c;
	int i,j,k;
	for(test_case = 0; test_case < T; test_case++)
	{
        scanf("%d",&temp);
        
        Answer = "N0";	
        
        a=temp/7;
        b=temp/9;
        c=temp/11;
        
        for(i=0; i<=a; i++)
    	{
    		for(j=0; j<=b; j++)
    		{
    			for(k=0; k<=c; k++)
    			{
    				if(temp== i*7 + j*9 + k*11) 
    				{
    					Answer = "YES";
    					printf("%d %d %d ", i, j, k);
    					    					
    				}
    			}
    		}
    	}
    	
		printf("Case #%d\n", test_case+1);
	    printf("%s\n", Answer);
        
	}

	return 0;
}
