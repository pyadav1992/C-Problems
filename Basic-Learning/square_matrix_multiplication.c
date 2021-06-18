// { Driver Code Starts

#include<stdio.h>

void multiply(int A[][100], int B[][100], int C[][100], int N);

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
	    int N;
		scanf("%d", &N);
		int A[100][100],B[100][100],C[100][100];
		int i, j;
		for(int i = 0; i < N; i++)
		    for(int j = 0 ; j < N; j++)
		        scanf("%d", &A[i][j]);
		for(int i = 0; i < N; i++)
		    for(int j = 0; j < N; j++)
		        scanf("%d", &B[i][j]);
		multiply(A, B, C, N);
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			   printf("%d ", C[i][j]);
		}
		printf("\n");
	}
 
    return 0;
}// } Driver Code Ends


/*Complete the function below*/
void multiply(int A[][100], int B[][100], int C[][100], int N)
{
    //add code here.
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            C[i][j] = 0;
            for(int k=0; k<N; k++)
            {
                // i = row of A, j = col of B, k = iteration for C
                C[i][j] += (A[i][k]*B[k][j]); 
            }
        }
    }
}
