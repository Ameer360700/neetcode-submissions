class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n=numbers.size();
        unordered_map<int,int>hashmap;
        for(int i=0;i<n;i++)
        {
              int number1=numbers[i];
              int number2=target-number1;
              if(hashmap.find(number2)!= hashmap.end())
              {
                  return {min(hashmap[number2]+1,i+1),max(hashmap[number2]+1,i+1)};
              }
              hashmap[number1]=i;
        }
        return {-1,-1};
    }
};
