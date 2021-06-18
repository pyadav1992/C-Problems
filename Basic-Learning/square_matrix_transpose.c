// { Driver Code Starts
#include <stdio.h>


 // } Driver Code Ends
//User function Template for C
#include <stdlib.h>

void transpose(int N, int matrix[][N])
{ 
    // Transpose
    int *transpose = (int*)calloc((N*N),sizeof(int));
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            transpose[col + N*row] = matrix[row][col];
        }
    }    

    // Copy transpose to the given matrix
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            matrix[row][col] = transpose[row + N*col];
        }
    }
    
    free(transpose);
    
} 

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	scanf("%d", &testcase);
	
	while(testcase--){
	    int N;
	    scanf("%d", &N);
	    
	    // Declaring matrix
	    int matrix[N][N];
    	
    	for(int i = 0;i<N;i++){
    	    for(int j = 0;j<N;j++){
    	        scanf("%d", &matrix[i][j]);
    	    }
    	}
    	
    	transpose(N, matrix);  
    	
    	for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                printf("%d ", matrix[i][j]);
        printf("\n");
    	
	}
	
	return 0;
}  // } Driver Code Ends
