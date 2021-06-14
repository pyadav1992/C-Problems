// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>


 // } Driver Code Ends
//User function Template for C

char extraChar(char s1[], char s2[])
{
    //code here
    int lenght_s1 = strlen(s1);
    int lenght_s2 = strlen(s2);
    int hash_table[26] = {0};
    int ret_char = ' ';
    //Populate hash table
    for(int i=0; i<lenght_s1; i++)
    {
        hash_table[s1[i]-'a']++;
    }
    // Modify hash table
    for(int i=0; i<lenght_s2; i++)
    {
        if(hash_table[s2[i]-'a'] == 0)
        {
            ret_char = s2[i];
            break;
        }
    }
    
    return ret_char;
}

// { Driver Code Starts.
    
int main() {
	
        int t;
        scanf("%d", &t);
        while(t--) {
            char s1[1000], s2[1000];
            scanf("%s%s", &s1, &s2);
            
            printf("%c\n", extraChar(s1, s2));
        }
}  // } Driver Code Ends
