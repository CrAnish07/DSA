class Solution {
//sync to github    
private:
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[]) {
       if(index >= digits.length()) {
        ans.push_back(output);
        return;
       }
       int number = digits[index] - '0';
        string value = mapping[number];

        for(int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, output, index+1, ans, mapping);
            output.pop_back();
        }
    }   
public:
    vector<string> letterCombinations(string digits) {
      vector<string> ans;
      int index = 0;
      string output;
      string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
      if(digits.length() == 0) {
        return ans;
      }
      solve(digits, output, index, ans, mapping);
      return ans;  
    }
};