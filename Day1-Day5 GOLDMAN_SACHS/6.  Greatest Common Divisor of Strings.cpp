https://leetcode.com/problems/greatest-common-divisor-of-strings/

if string 2 is divisor of string 1 then if it is totally diving the string 1
  then it should be same in case addition of both the string whether it is s1+s2 or s2+s1 should be same
  if different then string 2 is definetely not diving the string 1
    
    if(its equal) then check what is the greast common divisor of it's length and return till that index substring 

 string gcdOfStrings(string str1, string str2) {
        //simply calculate the 
        if(str1+str2==str2+str1)
        return str1.substr(0,gcd(size(str1),size(str2)));
        else
            return "";
    }
