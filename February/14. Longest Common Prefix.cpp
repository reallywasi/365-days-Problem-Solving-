class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string co="";
        string l=strs[0];
        string r=strs[n-1];
        for(int i=0;i<l.size();i++)
        {
if(l[i]==r[i])
{
    co=co+l[i];
}
else
break;
        }
        return co ;
    }
};
