#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin,s);
    string s3="";
    map<string,int> mp;
    vector<string> h;
    int u=s.length();
    for(int i=0;i<u;i++)
    {
        if(s[i]==' ')
        {mp[s3]++;
         //cout<<s3<<" ";
         if(mp[s3]==1)
         h.push_back(s3);
         s3="";
         continue;}
        int c=s[i];
        if (isupper(c)) 
            s[i] = tolower(c);
         s3.push_back(s[i]);
    }
    if(s3[0]!=' ')
    mp[s3]++;
    //cout<<s3;
    if(mp[s3]==1)
         h.push_back(s3);
         //s3="";
    char ws; int n; cin>>n; ws=cin.get();
    s3="";
    string ans1="";
    int max=0;
    int j=1;
    while(j<=n)
    {
        string s1,final; getline(cin,s1);
        final=s1;
   /* if(j==1) s1="Can Online Education be as good as school education";
    if(j==2) s1="Benefits and Challenges of e-Learning in India";
    if(j==3) s1="Strengthening the Online Education Ecosystem in India";*/
        //cout<<s1;
        int ans=0;
        map<string,int> mp1;
        int u1=s1.size();
        for(int i=0;i<u1;i++)
        {
         if(s1[i]==' ')
        {mp1[s3]++;
       //  cout<<s3<<" ";
         s3="";
         continue;}
        int c=s1[i];
        if (isupper(c)) 
            s1[i] = tolower(c);
            if(s1[i]!=' ')
         s3.push_back(s1[i]);
        }
        //if(s3[0]!=' ')
        mp1[s3]++;
         //cout<<s3<<" ";
         s3="";
        int o=h.size();
        for(int k=0;k<o;k++)
       { bool blank = false;
if (s.empty() || std::all_of(h[k].begin(), h[k].end(), [](char c){return std::isspace(c);})) {
      blank = true;
}
if(blank==false)
            ans=ans+mp1[h[k]];}
        if(ans>max)
        {
            max=ans;
            ans1=final;
        }
        //s1="";
        j++;
        //cin::ignore;
    }
    cout<<ans1<<endl;
}




////////////////////////////////////////////////////////////////
/*
# Enter your code here. Read input from STDIN. Print output to STDOUT
class Solution:
   def solve(self, s0, s1):
      s0 = s0.lower()
      s1 = s1.lower()
      s0List = s0.split(" ")
      s1List = s1.split(" ")
      return len(list(set(s0List)&set(s1List)))
ob = Solution()
S = input()
n=input()
n1=int(n)
ans=0
##ans1=""
for x in range(n1):
    T=input()
    g=ob.solve(S,T)
    if(g>ans):
        ans=g
        ans1=T 
##S = "i love python coding"
##T = "coding in python is easy"
print(ans1)*/

////////////////////////////////////////////////////////
/*
Suppose we have two strings s0 and s1, they are representing a sentence, we have to find the number of unique words that are shared between these two sentences. We have to keep in mind that, the words are case-insensitive so "tom" and "ToM" are the same word.

So, if the input is like s0 = "i love python coding", s1 = "coding in python is easy", then the output will be 2 as there are 2 common words, ['python', 'coding']

To solve this, we will follow these steps −

convert s0 and s1 into lowercase
s0List := a list of words in s0
s1List := a list of words in s1
convert set from words in s0List and s1List, then intersect them to get common words, and return the count of the intersection result.*/