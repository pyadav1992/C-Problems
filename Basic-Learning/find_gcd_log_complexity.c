// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        long long n1 = N, n2 = M;
        while(n1!=n2)
        {
            if(n1 > n2)
                n1 -= n2;
            else
                n2 -= n1;
        }
        long long gcd = n1;
        return ((N/gcd)+(M/gcd));
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        long long N, M;
        cin >> N >> M;
        Solution obj;
        cout << obj.sum(N, M) << "\n";
    }
}
  // } Driver Code Ends
