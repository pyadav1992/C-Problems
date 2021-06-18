// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

double posAverage(int numbers[], int size){
    
    
    //Write your code to find average of positive numbers in numbers array
    //return the answer
    double average = 0;
    double pos_numbers = 0;
    for(int i=0; i<size; i++)
    {
        if(numbers[i]>=0)
        {
            average += numbers[i];
            pos_numbers++;
        }
    }
    
    return average/pos_numbers;      
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        int numbers[n];
        for(int i = 0;i < n; i++){
            scanf("%d", &numbers[i]);
        }
        double avg = posAverage(numbers, n);
        printf("%lf\n", avg);  
	}
	
	return 0;
}

  // } Driver Code Ends
