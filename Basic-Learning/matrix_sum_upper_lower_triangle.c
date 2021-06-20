// { Driver Code Starts
//Initial Template for C

#include <stdio.h> 


 // } Driver Code Ends
//User function Template for C

int* sumTriangles(int N, int matrix[][N])
{
    int upper = 0; // upper triangle sum
    int lower = 0; // lower triangle sum
    
    
    //code here
    //update the two variables as required
    for (int row=0; row<N; row++)
    {
        for (int col=row; col<N; col++)
        {
            upper += matrix[row][col];
        }
    }

    for (int col=0; col<N; col++)
    {
        for (int row=col; row<N; row++)
        {
            lower += matrix[row][col];
        }
    }
    
    //below statements will return the required array
    static int res[2]; 
    res[0] = upper;
    res[1] = lower;
    return res;
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while(t--) 
    {
        int N;
        scanf("%d", &N);
        int matrix [N][N]; 
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }
        int *arr2;
        arr2 = sumTriangles(N, matrix);
        for (int i = 0; i < 2; ++i)
            printf("%d ", arr2[i]);
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends
