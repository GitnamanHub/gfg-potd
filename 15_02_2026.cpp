#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        int i=0, j=m-1;
        int mn = INT_MAX;
        sort(a.begin(),a.end());
        while(j<n) {
            mn = min(mn,a[j]-a[i]);
            j++;
            i++;
        }
        return mn;
    }
};