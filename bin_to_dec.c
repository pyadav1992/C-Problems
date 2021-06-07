// { Driver Code Starts
//Initial Template for C

#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

int binary_to_decimal(int B)
{
	int dec = 0;
	int pow = 0;
	int b = B;
	//code here
	while(b)
	{
	    dec = dec + ((b%10)*(1<<pow));
	    b/=10;
	    pow++;
	}
	return dec;
}

// { Driver Code Starts.
int main(){
    int T;
    scanf("%d", &T);
    while(T--)
    {
    	int B;
    	scanf("%d", &B);
    	int  ans = binary_to_decimal(B);
    	printf("%d\n", ans);
    }
	return 0;
}  // } Driver Code Ends
