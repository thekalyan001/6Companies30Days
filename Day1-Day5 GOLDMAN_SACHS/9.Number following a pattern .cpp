problem link- https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#
/*
First take a stack, a count variale from 1 as increasing starts from 1
Simple initution is to iterate over the string if it is i means increasing then push into the stack and increment the count and take out all the values from the stack
if char is 'D' then push the current val into stack and increment the stack.
*/
string printMinNumberForPattern(string S){
      string ans="";
        int count=0;
        stack<int>st;
        int num=1;
        for(auto itr:S)
        {
            if(itr=='D')
            {
                st.push(num);
                num++;
            }
            else
            {
                st.push(num);
                num++;
                while(st.empty()==false)
                {
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
       st.push(num); //in case str='D' then st.push(1)and this line also push(2) so pop->21
       while(st.empty()==false)
       {
           ans+=to_string(st.top());
           st.pop();
       }
        return ans;
    }
