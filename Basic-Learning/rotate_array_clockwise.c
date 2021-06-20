// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


void rotate(int arr[], int n)
{
    int temp = arr[n-1]; // store first element of the array
    int temp2 = 0;
    for (int i=n-1; i>=1; i--)
    {
        arr[i]= arr[i-1];
    }
    arr[0] = temp; // Append to last element of the array
}
