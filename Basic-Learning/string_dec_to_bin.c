// { Driver Code Starts
//Initial Template for C


#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C
#include <string.h>

void toBinary(char N[])
{
    // your code here
    // get decimal
    int N_length = strlen(N);
    int decimal = 0;
    int base = 1;
    while(N_length>0)
    {
        decimal = decimal + base*(N[--N_length]-'0'); // Change to decimal
        base = base * 10;
    }
    
    // get binary
    char binary[100] = {0};
    int i = 0;
    while(decimal>0)
    {
        binary[i++] = (decimal%2) + '0'; // Change to ascii
        decimal = decimal/2;
        
    }
    
    // reverse the string
    char reverse[100] = {0};
    int length = strlen(binary);
    int j=length;
    for(int i=0; i<length; i++)
    {
        reverse[i] = binary[--j];
    }
    
    // Print
    printf("%s", reverse);
}

// { Driver Code Starts.

int main() {
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    char n[100000];
	    scanf("%s", &n);
	    
	    toBinary(n);
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends
