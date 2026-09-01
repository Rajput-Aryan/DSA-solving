class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        
        vector<int> even;
        vector<int> odd;
        
        for(int i=0;i<car.size();i++){
            if(car[i]%2 == 0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }            
        }
        
        int ans=0;
        
        if(date%2 == 0){
            for(int i=0;i<odd.size();i++){
                ans = ans + fine[odd[i]];
            }
        }
        else{
            for(int i=0;i<even.size();i++){
                ans = ans + fine[even[i]];
            }
        }
        
        return ans;
    }
};