#include <bits/stdc++.h>
using namespace std;

void findNumbers(vector<int>& arr, int tarrget,vector<vector<int> >& ans, vector<int>& r,int i) {
	if (tarrget == 0) {
		ans.push_back(r);
		return;
	}
	while (i < arr.size() && tarrget - arr[i] >= 0) {
		r.push_back(arr[i]); 
		findNumbers(arr, tarrget - arr[i], ans, r, i);
		i++;
		r.pop_back();
	}
}

vector<vector<int>> combinationtarrget(vector<int>& arr, int tarrget) {
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	vector<int> r;
	vector<vector<int>> ans;
	findNumbers(arr, tarrget, ans, r, 0);
	return ans;
}
int main() {
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	int n = arr.size();

	int tarrget = 8; 
	vector<vector<int> > ans = combinationtarrget(arr, tarrget);
	
	for (int i = 0; i < ans.size(); i++) {
			for (int j = 0; j < ans[i].size(); j++)
				cout << ans[i][j] << " ";
			cout <<endl;
		
	}
	return 0;
}