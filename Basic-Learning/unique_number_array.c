// { Driver Code Starts
#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int distinct(int arr[], int n){
    
    //code here
    int count = 1;
    
    if(n == 0)
        return 0; // No elements in the array
    else if(n>1)
    {
        for(int i=1; i<n; i++)
        {
            int j = i;
            int cur_element = arr[j];
            // compare current element with all elements to the left
            while(j)
            {
                if(cur_element==arr[j-1]) // Not a distinct element found
                {
                    break;
                }
                j--; 
            }
            if(j==0) // Did we check all the elements to the left?
                count++; // Unique number found
        }
    }
    
    return count;
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", distinct(arr, n));
	}
	
	return 0;
}  // } Driver Code Ends
