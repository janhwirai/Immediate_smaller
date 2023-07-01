#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    for(int i=0;i<n;i++){
	        if(arr[i]>arr[i+1]){
	            arr[i]=arr[i+1];
	        }
	        else{
	            arr[i]=-1;
	        }
	    }
	    arr[n-1]=-1; //Default last element will be -1
	}

};


int main() {
    int t;
    cout<<"\nEnter testcases";
    cin >> t;
    while (t--) {
        int n, l, r;
        cout<<"\nEnter the size of array";
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cout<<"\nEnter the elements:";
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}