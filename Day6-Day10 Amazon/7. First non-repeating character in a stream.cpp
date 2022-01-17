//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#

string FirstNonRepeating(string A){
	// Code here
	unordered_map<char,int> mp;
	list<char> l;
	string ans = "";
	int curSize = 0,prevSize = 0;
	for(int i = 0; i<A.length(); i++){
		mp[A[i]]++;
		curSize = mp.size();
		if(curSize>prevSize){
			l.push_back(A[i]);
		}
		else{
			auto it = find(l.begin(),l.end(),A[i]);
    		if(it!=l.end())l.erase(it);
		}
		if(!l.empty()){
			ans.push_back(l.front());
		}
		else ans.push_back('#');
		prevSize = curSize;
	}
	return ans;
}
