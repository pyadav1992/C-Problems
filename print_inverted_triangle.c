// { Driver Code Starts
//Initial Template for C
// s = 4
// * * * * 
// * * *  
// * *   
// *  
  
#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void invTriangleWall(int s){
    int row, col;
    //Write your code here
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            if(col<=(s-row-1))
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int s; scanf("%d", &s);
        invTriangleWall(s);
	}
}  // } Driver Code Ends
