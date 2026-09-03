class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> vec;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] >= 0){
                vec.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] < 0){
                vec.push_back(arr[i]);
            }
        }
        arr = vec;
        
    }
};