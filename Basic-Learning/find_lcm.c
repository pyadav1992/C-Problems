// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int LCM(int a, int b){

    //write your code here
    //return LCM of a and b
    int max = (a>b?a:b);
    int upper_limit = a*b;
    int lcm = max;
    int i;
    
    for(i=max; i<=upper_limit; i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            lcm = i;
            break;
        }
    }
    
    return lcm;
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int a, b; scanf("%d %d", &a, &b);
        printf("%d\n", LCM(a, b));
	}
}  // } Driver Code Ends
