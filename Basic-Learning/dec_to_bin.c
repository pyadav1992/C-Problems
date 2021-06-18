// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int fibonacci(int n){
        
    //Write your code here to calculate
    //to calculate the nth fibonacci number
    int a = 1; // First element
    int b = 1; // Second element
    int next_num = 1;
    for(int i=2; i<n; i++) // start with 3rd
    {
        next_num = a+b;
        a = b;
        b = next_num;
    }
    
    return next_num;
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        int ans = fibonacci(n);
        printf("%d\n", ans);
	}
}  // } Driver Code Ends
