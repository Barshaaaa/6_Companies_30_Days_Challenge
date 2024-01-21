//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        sort(arr.begin(),arr.end());
         for(int i=1;i<n;i++){
             if(arr[i-1]==arr[i]){
                 ans.push_back(arr[i]);
                 break;
             }
             
         }
         if(arr[0]!=1){
             ans.push_back(1);
         }
         else if(arr[n-1]!=n){
             ans.push_back(n);
         }
         else{
             for(int i=1;i<n;i++){
                 if(arr[i]-arr[i-1]>1){
                     ans.push_back(arr[i-1]+1);
                 }
             }
         }
         return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends