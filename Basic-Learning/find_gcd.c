// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


int gcd(int a, int b){

        
    //code here to calculate and return gcd of a and b
    int min = (a<b?a:b); // GCD cannot be more than the small number
    int i, gcd=1;
    for(i=2; i<=min; i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            gcd = i;
        }
    }

    return gcd; // 1 if Prime number    
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int A, B; scanf("%d %d", &A, &B);
        int ans = gcd(A,B);
        printf("%d\n", ans);
	}
}  // } Driver Code Ends
