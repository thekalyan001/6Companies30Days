//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
//count the digit and add the char and their sum */

string encode(string src)
{     
  int n=src.size();
  string s="";int count=1;

  for(int i=0;i<n-1;i++)
  {
      if(src[i]==src[i+1])
       count=count+1; //count same char
      else
      {   s+=src[i]; //found diff char then ad the char and its count
          s+=to_string(count);
          count=1;
      }
      
  }
  s+=src[n-1];//add the n-th element
  return s+to_string(count);
}     
