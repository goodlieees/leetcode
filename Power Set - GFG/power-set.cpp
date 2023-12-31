//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void f(int ind,string ds,int n,string nums,vector<string>&store){
    if(ind==n){
        if(ds!="")store.push_back(ds);
        return;
    }
    //take
    ds.push_back(nums[ind]);
    f(ind+1,ds,n,nums,store);

    //not-take
    ds.pop_back();
    f(ind+1,ds,n,nums,store);
}
		vector<string> AllPossibleStrings(string s){
		int n=s.size();
        string temp="";
        vector<string>store;
        f(0,temp,n,s,store);
        sort(store.begin(),store.end());
        return store;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends