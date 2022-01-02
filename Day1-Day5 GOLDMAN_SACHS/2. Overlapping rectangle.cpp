/*
problem link- https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/#
intuition is to check the coordinate ponits of the rectangle if the other rectangle is in
left or right or bottom or top of the other rect then it's not overlapping else overlapping
*/
Solution-
  
  int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        //let l1,l2- rect1, l2,r2-rect2
        //L1[0]>R2[0]  when rect 1 is right of rect 2
        //L2[0]>R1[0]) when rect 1 is left of rect 2 
        if(L1[0]>R2[0] || L2[0]>R1[0])
            return false;
            
        //L1[1]<R2[1]  when rect 1 is top of rect 2
        //L2[0]>R1[0]) when rect 1 is bottom of rect 2 
        if(L1[1]<R2[1] || L2[1]<R1[1])
           return false;
           return true;
    }
