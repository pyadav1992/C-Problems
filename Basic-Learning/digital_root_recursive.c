// { Driver Code Starts



#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

//Complete this function
int digitalRoot(int n)
{
    //Your code here
    int N = n;
    int sum = N%10;
    
    while(N>=10)
    {
        N=N/10;
        sum += (N%10);
    }
    
    if(sum>=10)
         sum = digitalRoot(sum);
    
    return sum;
}

// { Driver Code Starts.

int main() {
	int T;
	scanf("%d", &T);//taking testcases
	while(T--)
	{
	    int n;
	    scanf("%d", &n);//taking number n
	    
	    printf("%d\n", digitalRoot(n));
	    
	}
	return 0;
}  // } Driver Code Ends
