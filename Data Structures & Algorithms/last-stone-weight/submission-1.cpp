class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int>pq(stones.begin(),stones.end());

        while(pq.size()>1)
        {
            int firstweight=pq.top();
            pq.pop();
            int secondweight=pq.top();
            pq.pop();
            if(firstweight!=secondweight)
            {
                pq.push(firstweight-secondweight);
            }
            
        }
        if(pq.empty())
        {
            return 0;
        }
        return pq.top();
    }
};
