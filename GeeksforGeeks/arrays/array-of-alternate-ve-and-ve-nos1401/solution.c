class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int> pos;
        vector<int> neg;
        vector<int> vec;
        
        int x=0;
        int y=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        
        while(x < pos.size() && y < neg.size()){
            vec.push_back(pos[x]);
            x++;
            
            vec.push_back(neg[y]);
            y++;
        }
        
        while(x < pos.size()){
            vec.push_back(pos[x]);
            x++;
        }
        
        while(y < neg.size()){
            vec.push_back(neg[y]);
            y++;
        }
        arr=vec;
       
    }