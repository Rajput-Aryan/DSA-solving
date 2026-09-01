class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for(int i=1;i<n-1;i++){
            sum = sum + arr[i];
        }
        
        return sum;
    }
};