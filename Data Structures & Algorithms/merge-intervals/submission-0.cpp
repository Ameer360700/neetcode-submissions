class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());          // fix 1: sort by start
    int n = intervals.size();
    vector<bool> dead(n, false);                       // fix 2: mark exactly which rows are absorbed

    for (int i = 0; i + 1 < n; i++) {                  // fix 3: no unsigned underflow
        if (intervals[i][1] >= intervals[i+1][0]) {    // fix 4: dropped the redundant second condition
            intervals[i+1][0] = intervals[i][0];
            intervals[i+1][1] = max(intervals[i][1], intervals[i+1][1]);  // fix 5: max, not self-assign
            dead[i] = true;
        }
    }

    vector<vector<int>> ans;
    for (int k = 0; k < n; k++)
        if (!dead[k]) ans.push_back(intervals[k]);
    return ans;
}
};
