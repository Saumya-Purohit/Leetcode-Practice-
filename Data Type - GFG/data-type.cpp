//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        
        if(str=="Integer"){
            return 4;
        }
        else if(str=="Character"){
            return 1;
        }
        else if(str=="Long"){
            return 8;
        }
        else if(str=="Float"){
            return 4;
        }        
        else if(str=="Double"){
            return 8;
        }        // your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends