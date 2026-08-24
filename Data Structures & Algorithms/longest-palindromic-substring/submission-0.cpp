class Solution {
public:
   pair<int,int> expandto( string& s, int left,int right)
   {
       while(left>=0&&right<s.size())
       {
        if(s[left]==s[right])
        {
            left--;
            right++;
        }
        else{
           
            break;
        }
       }
        left++;
            right--;

       pair<int,int>qe={left,right};
       return qe;

   }
    string longestPalindrome(string s) {
        if(s.size()==0) return "";
        int mx=0;
        int p=-1,q=-1;

        for(int i=0;i<s.size();i++)
        {
            //if(i)
           pair<int,int>len1= expandto(s,i,i);
           pair<int,int> len2=expandto(s,i,i+1);
           if(mx<len1.second-len1.first+1)
           {
           mx=len1.second-len1.first+1;
           p=len1.first;
           q=len1.second;
           }
           if(mx<len2.second-len2.first+1)
           {
           mx=len2.second-len2.first+1;
           p=len2.first;
           q=len2.second;
           }
        }
        return s.substr(p,q-p+1);
    }
};
