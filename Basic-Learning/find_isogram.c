// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isIsogram(char s[]);

int main()
 {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        
        char s[1000];
        scanf("%s", &s);
        
        printf("%d\n", isIsogram(s));
        
    }
	return 0;
}// } Driver Code Ends


//User function Template for C
#define all_alphabets 'z'-'a'
bool isIsogram(char s[])
{
    //Your code here
    // Initialize the hash_table
    int hash_table[all_alphabets+1] = {0};
    // Fill the hash_table
    for(int i=0; i<strlen(s); i++)
    {
        hash_table[s[i]-'a']++; // Increment if the character is found
        if(hash_table[s[i]-'a']>1)
        {
            return false; // Character appeared twice OR more than once
        }
    }
    return true; // Given string is isogram    
}
