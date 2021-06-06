// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// This function should print the prime factorization
// of the number n
// The new line is given by the driver's code.
int isPrime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    if(n==i)
        return 1;
}

void printPrimeFactorization(int n){
    // code here
    int i;
    for(i=2; i<n; i++)
    {
        if(isPrime(i))
        {
            int x = i;
            while(n%x==0)
            {
                printf("%d ", i);
                x = x*i;
            }
        }
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
            
        printPrimeFactorization(n);
            
        printf("\n");
	}
}  // } Driver Code Ends
