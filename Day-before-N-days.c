// Given two integer d and n. Where d is the day, out of 7 days of week, d varies from 0 to 6 as shown below.
// 0 - Sunday
// 1 - Monday
// 2 - Tuesday
// 3 - Wednesday
// 4 - Thursday
// 5 - Friday
// 6 - Saturday
// Complete the function utility() with d and n as parameters. Print index for the day which is n days before the given day d.
  
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void utility(int d, int n){
    int diff = d - (n%7);
    //write your code here
    printf("%d", (int)(diff<0)?(7+diff):diff);
   
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	while(t-- > 0) {
        int d, n;
        scanf("%d %d", &d, &n);
        utility(d, n);
        printf("\n");
    }
	
}  // } Driver Code Ends
