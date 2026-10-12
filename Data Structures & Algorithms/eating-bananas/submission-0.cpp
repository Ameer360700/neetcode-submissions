class Solution {
private:
    int findMax(vector<int>& piles)
    {
         int max=0;
         for(int i=0;i<piles.size();i++)
         {
             if(piles[i]>piles[max])
             {
                 max=i;
             }
         }
         return piles[max];
    }
    int returnhrs(vector<int>&piles,int k)
    {
             int totalhrs=0;
             for(int i=0;i<piles.size();i++)
             {
                  totalhrs+=ceil((double)piles[i]/k);
             }
             return totalhrs;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
          int low=1;
          int high=findMax(piles);
          while(low<=high)
          {
             int mid=(low+high)/2;
             int totalhrs=returnhrs(piles,mid);
             if(totalhrs<=h)
             {
                high=mid-1;

             }
             else
             {
                low=mid+1;
             }
          }
          return low;
    }
};
