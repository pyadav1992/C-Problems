// { Driver Code Starts
#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int sub(int a, int b){
    //code here
    return (a-b);
}

int add(int a, int b){
    //code here
    return (a+b);
}

void compute(int a, int b, int(*pfun)(int, int)){
    
    //print result as per function pointer
    //code here
    printf("%d\n",pfun(a,b));
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int a, b;
	    scanf("%d %d", &a, &b);
        compute(a, b, sub);
        compute(a, b, add);
	}
}  // } Driver Code Ends
