// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int nFactorial(int n){
    int ans = 1;
    
    //Write your code here
    for (int i=1; i<=n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        int ans = nFactorial(n);
        printf("%d\n", ans);
	}
}  // } Driver Code Ends
