// { Driver Code Starts
//Initial Template for C++


#include<stdio.h>


 // } Driver Code Ends
//User function Template for C++

long binarySubstring(int n, char S[]){
    
    // Your code here
    int ones = 0;
    for(int i=0; i<n; i++)
    {
        if((S[i]-'0') == 1)
        {
            ones++;
        }
    }
    
    return (ones*(ones-1))/2;
}


// { Driver Code Starts.

int main()
{
    int t, n;
    char S[10000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        scanf("%s", &S);
        
        printf("%ld\n", binarySubstring(n, S));
    }
}
  // } Driver Code Ends
