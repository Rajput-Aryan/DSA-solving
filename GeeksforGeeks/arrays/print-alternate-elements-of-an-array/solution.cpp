class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        int size=arr.size();
        vector<int> vec;
        int j;
        
        for(int i=0;i<size;i+=2){
            vec.push_back(arr[i]);
        }
        
        return vec;
    }
};