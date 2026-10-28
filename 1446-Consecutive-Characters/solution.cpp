class Solution {
public:
    int maxPower(string s) {
         int max_s=0;
            int curr_s=1;
            

        for(int i=1;i<=s.length();i++)
        {
           if(s[i]==s[i-1]){
            curr_s+=1;
            if(curr_s>=max_s)
            max_s=curr_s;
           }
           else
           curr_s=1;
        }
        return max_s;
    }
};