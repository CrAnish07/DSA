class Solution {
//sync to github    
public:
    int reverse(int x) {
       int ans = 0;

       while(x != 0) {
           int n = x%10;

           if((ans > INT32_MAX/10 ) || (ans < INT32_MIN/10)) {
               return 0;
           }
           ans = ans*10 + n;
           x = x/10;
       } 
       return ans;
    }
};