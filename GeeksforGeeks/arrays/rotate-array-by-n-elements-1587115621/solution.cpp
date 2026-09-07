class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        if(d>arr.size()){
            d=d%arr.size();
        }
        
        vector<int> vec(arr.begin()+d, arr.end());
        
        for(int i=0;i<d;i++){
            vec.push_back(arr[i]);
        }
        
        arr = vec;
        
    }
};