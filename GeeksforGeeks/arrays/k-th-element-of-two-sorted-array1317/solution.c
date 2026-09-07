class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        vector<int> vec;
        vec=a;
        
        for(int i=0;i<b.size();i++){
            vec.push_back(b[i]);
        }
        
        sort(vec.begin(),vec.end());
        
        return vec[k-1];
        
    }
};