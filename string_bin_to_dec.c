// { Driver Code Starts
// Initial Template for C
// Input: B = 10001000
// Output: 136
  
#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

int binary_to_decimal(char str[])
{
    // Code here.
    int decimal = 0;
    int base = 1;
    int length = strlen(str);
    int j = length;
    for(int i=0; i<length; i++)
    {
        int ascii_to_decimal = str[--j] - '0'; // Change from ascii to decimal
        decimal = decimal + base*ascii_to_decimal;
        base = base*2;
    }
    return decimal;
}

// { Driver Code Starts.

int main(){
    int T;
    scanf("%d", &T);
    while(T--)
    {
    	char str[10000];
    	scanf("%s", &str);
    	int  ans = binary_to_decimal(str);
    	printf("%d\n", ans);
    }
	return 0;
}  // } Driver Code Ends
