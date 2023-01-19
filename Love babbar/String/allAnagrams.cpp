vector<int> findAnagrams(string s, string p) {
        int sL=s.length();
        int pL=p.length();
        vector<int> ans;

        for(int i=0;i<sL;i++){
            string str=s.substr(i,pL);
            if(isAnagram(p,str)) ans.push_back(i);
        }
        return ans;
    }

    bool isAnagram(string a, string b){
      map<char,int> m;
      for(int i=0;i<a.size();i++) m[a[i]]++;
      for(int i=0;i<b.size();i++) m[b[i]]--;
      for(auto i:m) if(i.second!=0) return false;
      return true;
    }