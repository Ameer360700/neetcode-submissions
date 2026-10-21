class Solution {
public:

    string encode(vector<string>& strs) {
        
        //using lengthofstring#string as the delimiter
        string encodedstring="";
        for(string str : strs)
        {    
             encodedstring.append(to_string(str.size()));
             encodedstring.push_back('#');
             encodedstring.append(str);
        }
        return encodedstring;
    }

    vector<string> decode(string s) {
          
          vector<string>res;
          int i=0;
          while(i< s.size())
          {
              int j=s.find('#',i);
              int n = stoi(s.substr(i, j - i));
              res.push_back(s.substr(j+1,n));
              i=j+1+n;
          }
          return res;

    }
};
