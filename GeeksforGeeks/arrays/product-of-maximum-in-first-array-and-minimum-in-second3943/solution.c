class Solution {
  public:
    int minMaxProduct(vector<int> &arr1, vector<int> &arr2) {
        int max = arr1[0];
        int min = arr2[0];
        
        for(int i=1;i<arr1.size();i++){
            if(arr1[i] > max){
                max = arr1[i];
            }
        }
        
        for(int i=1;i<arr2.size();i++){
            if(arr2[i] < min){
                min = arr2[i];
            }
        }
        
        int ans=max*min;
        
        return ans;
    }
};