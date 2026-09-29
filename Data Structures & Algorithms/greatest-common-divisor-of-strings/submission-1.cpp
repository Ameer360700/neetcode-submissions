class Solution {
public:
   string gcdOfStrings(string str1, string str2) {
    if (str1.size() < str2.size()) return gcdOfStrings(str2, str1);  // keep str1 the longer one
    if (str1.find(str2) != 0) return "";                             // str2 must be a prefix of str1
    if (str2.empty()) return str1;                                   // base case
    return gcdOfStrings(str2, str1.substr(str2.size()));
}
};