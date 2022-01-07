Original question name- Distributing M items in a circle of size N starting from K-th position

https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/

Find the position of M-th item
int findPosition(int N , int M , int K) {
       // in case only one home
        if(N==1)return 1;
        int tillPoint=(M%N+K-1);// if m is larger then N then count the modulus rest+starting k-1
        if(tillPoint==N)return tillPoint;
        return tillPoint%N;

    }
