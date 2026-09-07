class Solution {
  public:
    void zigZag(vector<int> &arr) {
        for(int i=0;i<arr.size();i++){
            if(i%2 == 0){
                if(arr[i] > arr[i+1]){
                    swap(arr[i], arr[i+1]);
                }
            }
            else{
                if(arr[i] < arr[i+1]){
                    swap(arr[i], arr[i+1]); 
                }
            }
        }
                
    
        
    }
};
