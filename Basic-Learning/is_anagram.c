// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C
#include <string.h>

//Function is to check whether two strings are anagram of each other or not.
bool isAnagram(char a[], char b[]){
    
    // Your code here
    int hash_table[26] = {0};
    int a_length = 0;
    if(strlen(a)!=strlen(b))
        return false; // length needs to be same
    else
    {
        a_length = strlen(a);
        // Populate hash table
        for(int i=0; i<a_length; i++)
        {
            hash_table[a[i]-'a']++;
        }
        // Modify hash table
        for(int i=0; i<a_length; i++)
        {
            if(hash_table[b[i]-'a']>0)
                hash_table[b[i]-'a']--;
        }
        // Check hash table
        for(int i=0; i<26; i++)
        {
            if(hash_table[i])
                return false;
        }        
    }
    
    return true;
}


// { Driver Code Starts.

int main() {
    
    int t;

    scanf("%d", &t);

    while(t--){
        char c[10000], d[10000];

        scanf("%s%s", &c, &d);

        if(isAnagram(c, d)) printf("YES\n");
        else  printf("NO\n");
    }

}
  // } Driver Code Ends
