// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>

// A panagram is a string with every letter in the english alphabet present in the string

 // } Driver Code Ends
//User function Template for C
#include<string.h>

bool isPanagram(char str[]){

    //Your code here
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
    char ALPHABETS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *found = NULL;
    if(strlen(str)<('Z'-'A'))
    {
        return false; // not enough characters
    }
    else
    {
        for(int i=0; i<strlen(alphabets); i++)
        {
            found = strchr(str, alphabets[i]);
            if(NULL == found)
            {
                found = strchr(str, ALPHABETS[i]);
                if(NULL == found)
                {
                    return false;
                }
            }
        }   
    }
    
    return true;
}

// { Driver Code Starts.


int main() {
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
	char s[1006];
	scanf("%s", &s);
	
	printf("%d\n", isPanagram(s));
	}
	
	return 0;
	
}  // } Driver Code Ends
