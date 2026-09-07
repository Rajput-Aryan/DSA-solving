class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        vector<int> vec;
        int 
        count = 0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0){
                vec.push_back(arr[i]);
            }
            else{
                count = count + 1;
            }
        }
        int n=vec.size();
        for(int i=n-1;i<arr.size();i++){
            vec.push_back(1);
        }
        
        arr = vec;
        
    }
};