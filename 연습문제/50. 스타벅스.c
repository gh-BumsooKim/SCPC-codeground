#include <stdio.h>

char *Answer;

int main()
{
	int T, test_case;
	
	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
		int temp=0;
		
		int N, M, K;
		scanf("%d %d %d", &N, &M, &K);
		
		int N_num[N];
		int i;
		for(i=0;i<N;i++) scanf("%d",&N_num[i]);
		
		int M_num[M];
		int j;
		for(j=0;j<M;j++) scanf("%d",&M_num[j]);
		
		int q;
		for(q=0;q<N;q++)
		{
			temp+=M_num[N_num[q]-1];
		}
		
		if(temp <= K) Answer = "Y";
		else Answer = "N";
	        
		printf("Case #%d\n", test_case+1);
	    printf("%s\n", Answer);
	}

	return 0;
}
