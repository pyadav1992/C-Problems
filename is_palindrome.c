// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>


 // } Driver Code Ends
//User function Template for C

int isPlaindrome(char str[])
{
    // Your code goes here
    //Your code here
    int start = 0;
    int end = strlen(str)-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;    
}

// { Driver Code Starts.

int main() 
{
   	int t;
   	scanf("%d", &t);
   	while(t--)
   	{
   		char s[100000];
   		scanf("%s", &s);;


   		printf("%d\n", isPlaindrome(s));
   	}

    return 0;
}  // } Driver Code Ends
