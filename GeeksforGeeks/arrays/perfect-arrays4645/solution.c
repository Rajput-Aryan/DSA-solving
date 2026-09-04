class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        vector<int> vec;
        for(int i=arr.size()-1;i>=0;i--){
            vec.push_back(arr[i]);
        }
        
        if(arr == vec){
            return true;
        }
        else{
            return false;
        }
    }
};
