class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int rows=matrix.size();
       int cols=matrix[0].size();
       int top=0;
       int bottom=rows-1;
       int row=-1;
       while(top<=bottom)
       {
            row=(top+bottom)/2;
            if(target<matrix[row][0])
            {
                bottom=row-1;
            }
            else if(target>matrix[row][cols-1])
            {
                top=row+1;
            }
            else
            {
                break;
            }
       }
       if(row==-1)
       {
          return false;
       }
       int start=0;
       int end=cols-1;
       while(start<=end)
       {
          int middle=(start+end)/2;
          if(target==matrix[row][middle])
          {
              return true;
          }
          else if(target<matrix[row][middle])
          {
              end=middle-1;
          }
          else
          {
             start=middle+1;
          }
       }
       return false;

    
    }
};
