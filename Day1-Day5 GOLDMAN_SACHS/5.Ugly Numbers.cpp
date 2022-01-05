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



eg n=7

n=7
----------------------
1
----------------------


n=6
----------------------
2 3 5
----------------------


n=5
--------------     
 3 5 | 4 6 10      
--------------- 
arrange
--------------
 3 4 5 6 10     
---------------

n=4
--------------
 4 5 6 10 | 9 15    
---------------
arrange
--------------
 4 5 6 9 10 15
---------------

n=3
--------------------
 5 6 10 15 | 8 12 20 
--------------------
arrange
------------------
 5 6 10 15 8 12 20  
------------------

n=2
---------------
 6 10 15 8 12 20| 25
----------------
arrange
---------------
 6 8 10 12 15 20 25
----------------

n=1
-------------------------
 8 10 12 15 20 25 | 18 30
------------------------
arrange
---------------------
 8 10 12 15 18 20 25 30
---------------------
n=0

res=8 n=7
