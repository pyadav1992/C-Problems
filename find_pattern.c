// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// function should find if the string p is
// in the string s. Return the starting index
// of the string p in s. Return -1 if the
// string doesnot exists in s.
int findPattern(char s[], char p[]){
    // code here
    char *found_at = NULL;
    found_at = strstr(s,p);
    if(NULL == found_at)
    {
        return -1;
    }
    
    return (int)(found_at-s); 
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    char s[1000], p[1000]; scanf("%s %s", &s, &p);
            
        int index = findPattern(s, p);
        printf("%d\n", index);
	}
	
	return 0;
}  // } Driver Code Ends
