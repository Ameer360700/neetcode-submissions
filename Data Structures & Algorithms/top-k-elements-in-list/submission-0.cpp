class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>freq;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        vector<int>res;
        for(auto num:nums)
        {
            freq[num]++;
        }
        for(auto [number,frequency]:freq)
        {
            minheap.push({frequency,number});
            if(minheap.size()>k)
            {
                minheap.pop();
            }
        }
        while(!minheap.empty())
        {
            pair<int,int>node=minheap.top();
            res.push_back(node.second);
            minheap.pop();
        }
        return res;
        

    }
};
