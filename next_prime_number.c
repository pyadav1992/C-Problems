// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int is_prime(int n){
    
    //Write your code here
    //returns a boolean value 
    if(n>1) // 0 and 1 are prime
    {
        for (int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int nextPrime(int n){
      
    int prime = n+1;    
    //code here to find next prime number
    //return next prime number
    while(is_prime(prime) == 0)
    {
        prime++;
    }
    
    return prime;
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        int ans = nextPrime(n);
        printf("%d\n", ans);
	}
}  // } Driver Code Ends
