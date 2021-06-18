// { Driver Code Starts


#include <stdio.h>


 // } Driver Code Ends
//User function Template for C
#include <string.h>

void reverseString(char str[])
{
    // code here
    char reverse[100] = {0};
    int length = strlen(str);
    int j=length;
    for(int i=0; i<length; i++)
    {
        reverse[i] = str[--j];
    }
    printf("%s", reverse);
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    char str[60]; scanf("%s", str);
        reverseString(str);
        printf("\n");
	}
	
	return 0;
}  // } Driver Code Ends
