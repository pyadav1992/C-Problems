// { Driver Code Starts
//Initial Template for C
// n = 4
// * * * *
// *     *   
// *     *
// * * * *

#include <stdio.h>

// } Driver Code Ends
//User function Template for C

void square(int n){
    // code here
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n; col++)
        {
            if((col==1) || (col==n) || (row==1) || (row==n))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


// { Driver Code Starts.

int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        square(n);
    }
    return 0;
}  // } Driver Code Ends
