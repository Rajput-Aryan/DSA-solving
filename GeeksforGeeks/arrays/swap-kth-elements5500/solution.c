
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        int n = arr.size();
        int a = k-1;
        int b = n-k;
        
        swap(arr[a], arr[b]);
        
    }
};
