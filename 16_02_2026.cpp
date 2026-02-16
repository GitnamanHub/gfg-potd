/*
Meeting Rooms
Given a 2D array arr[][], where arr[i][0] is the starting time of ith meeting and arr[i][1] is the ending time of ith meeting, the task is to check if it is possible for a person to attend all the meetings such that he can attend only one meeting at a particular time.

Note: A person can attend a meeting if its starting time is greater than or equal to the previous meeting's ending time.

Examples:

Input: arr[][] = [[1, 4], [10, 15], [7, 10]]
Output: true
Explanation: Since all the meetings are held at different times, it is possible to attend all the meetings.
Input: arr[][] = [[2, 4], [9, 12], [6, 10]]
Output: false
Explanation: Since the second and third meeting overlap, a person cannot attend all the meetings.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 2*106
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(arr[0][0]>arr[0][1]) return false;
        int end = arr[0][1];
        for(int i=1;i<n;i++) {
            if(arr[i][0]>=end) {
                if(arr[i][1]>=arr[i][0]) {
                    end = arr[i][1];
                } else return false;
            } else return false;
        }
        return true;
    }
};