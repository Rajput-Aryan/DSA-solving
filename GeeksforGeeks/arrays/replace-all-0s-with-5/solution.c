class Solution {
  public:
    int convertFive(int n) {
        
        int count = 0;
        while(n!=0){              // finding the digits 
            n = n/10;
            count ++;
        }
        
        int arr[count];
        for(int i = count-1;i>0;i--){
            arr[i] = n%10;
            n=n/10;
        }
        
        for(int i=0;i<count;i++){
            if(arr[i] == 0){
                arr[i] = 5;
            }
        }
        
        int ans = 0;
        for(int i=0;i<count;i++){
            ans = ans*10 + arr[i];
        }
        
        return ans;
    }
};