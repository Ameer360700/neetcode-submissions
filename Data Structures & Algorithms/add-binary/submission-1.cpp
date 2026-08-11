class Solution {

public:
    string addBinary(string a, string b) {
        
         int i=a.size()-1;
         int j=b.size()-1;
         int carry=0;
         string result="";
         while(i>=0 || j>=0 || carry>0)
         {
             int digit1=(i>=0)?(a[i]-'0'):0;
             int digit2=(j>=0)?(b[j]-'0'):0;

             int total=digit1+digit2+carry;

             result += (total%2)+'0'; //((total%2)+'0' directly converts the bit to bit string    
             carry=total/2;
             i--;
             j--;
         }
         reverse(result.begin(),result.end());
         return result;
        
    }
};