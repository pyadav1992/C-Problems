// { Driver Code Starts
//Initial Template for C

#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

/*  
     arr[] is the array
     n = number of element in array
     mod = modulo value;
*/
// Returns (a * b) % mod 
long long int moduloMultiplication(long long int num1, 
                                   long long int num2, 
                                   long long int mod) 
{ 
    // Initialize result
    long long int result = 0;   
  
    // Update num1 if it is more than or equal to mod 
    num1 %= mod; 
  
    while (num2) 
    { 
        // If num2 is odd, add num1 with result 
        if (num2 & 1) 
        {
            result = (result + num1) % mod; 
        }
        
        // Here we assume that doing 2*num1 doesn't cause overflow 
        num1 = (2 * num1) % mod;
        num2 >>= 1;  // num2 = num2/2 
    } 
  
    return result; 
} 

long long int product(int arr[], int n, long long int mod)
 {
     //code here
     long long int prod = 1;
     for(int i=0; i<n; i++)
     {
         prod = moduloMultiplication(prod, arr[i], mod);
     }
     
     return (long long int)(prod);
     
 }

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
   {
        int n;
        scanf("%d", &n);
        int arr[100001]={0};
        for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);  
      
        long long int mod=1000000007;
        printf("%d\n", product(arr, n, mod));
    
    }
    return 0;
}  // } Driver Code Ends
