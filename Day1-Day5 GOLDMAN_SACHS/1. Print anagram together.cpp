//problem link- https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
/*
initution -
 just iterate through all the string using double loop and first find the current element frequency at index i and iterate though next elemnt 
 j=i+1 and..
 try finding the frequency of each element and if it matches with current element freq count then take that into vector
*/
//solution-
 bool areAnagram(string s1,string s2)
{
  vector<int>hash(256,0);
  if(s1.size()!=s2.size())return false;
  int i;
  for(i=0;s1[i] && s2[i]; i++)
  {
    hash[s1[i]]++;
    hash[s2[i]]--;
  }
  for(int i=0;i<256;i++)
    if(hash[i])
      return false;
    return true;
  }
  vector<vector<string> > Anagrams(vector<string>& s) {
    vector<vector<string>>res;
    unordered_map<string,vector<string>>mp;
    int n=s.size();
    for(int i=0;i<n;i++)
      {   vector<string>vec;
       if(s[i]!="!!")
         { vec.push_back(s[i]);
          for(int j=i+1;j<n;j++)
          {
            if(areAnagram(s[i],s[j]) && s[j]!="!!")
              vec.push_back(s[j]),s[j]="!!";
          }
          if(vec.size()>0)
            res.push_back(vec);
        }
      }
      return res;
    }

/* below is the program with O(N*|S|*log|S|) time complexity


vector<vector<string> > Anagrams(vector<string>& s) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
       for(string ele:s)
       {
           string word=ele;
           sort(word.begin(),word.end());
           mp[word].push_back(ele);
       }
       for(auto i:mp)
       {
           res.push_back(i.second);
       }
        return res;
    }
    
   */
