//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void f(int ind,vector<int>ds,int n,vector<int>nums,vector<vector<int>>&store){
    if(ind==n){
        store.push_back(ds);
        return;
    }
    //take
    ds.push_back(nums[ind]);
    f(ind+1,ds,n,nums,store);

    //not-take
    ds.pop_back();
    f(ind+1,ds,n,nums,store);
}
    vector<vector<int> > subsets(vector<int>& nums)
    {
        //code here
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>store;
        f(0,ds,n,nums,store);
        sort(store.begin(),store.end());
        return store;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends