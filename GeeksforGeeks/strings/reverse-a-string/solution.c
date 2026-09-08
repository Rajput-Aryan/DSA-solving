class Solution {
  public:
    string reverseString(string& s) {
        string a;
        
        for(int i=s.size();i>=0;i--){
            a.push_back(s[i]);
        }
        
        return a;
    }
};
