Simple intuition of algo is to include all the multiple of 2,3 ,5 as mentioned in the problem till loop n
stoe it in set bcoz the property of set is it stores the element in sorted order.
  eventually we'll get our desired output
 //https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#

ull getNthUglyNo(int n) {
	   set<ull>s;
	   set<ull>::iterator itr;
	   s.insert(1);
	   ull val;n--;
	   
	   while(n--){
	       itr=s.begin();
	       val=*itr; 
	       s.erase(itr);
	     
	       
	       s.insert(val*2);
	       s.insert(val*3);
	       s.insert(val*5);
	   }
	    return *s.begin();
	}
