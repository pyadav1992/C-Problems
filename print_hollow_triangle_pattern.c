 
  
// { Driver Code Starts
// Initial Template for C
// S = 9
// *
// * *
// *   *
// *     *
// *       *
// *         *
// *           *
// *             *
// * * * * * * * * *

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void triangle(int s){
        
    //Write your code here
    //Write your code here
    int row, col;
    for (row=0; row<s; row++)
    {
        for (col=0; col<=row; col++)
        {
            if(row==(s-1))
            {
                printf("* ");
            }
            else if(col==0)
            {
                printf("*");
            }
            else if (col==row)
            {
                printf("  *");
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
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int s; scanf("%d", &s);;
	    triangle(s);
	}
}  // } Driver Code Ends
