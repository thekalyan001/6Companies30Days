//https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/#

vector <int> max_of_subarrays(int *arr, int n, int k)
    {
    std::deque<int> Qi(k);
    vector<int>res;
    int i;
    for (i = 0; i < k; ++i)
    {

        while ((!Qi.empty()) && arr[i] >=
                            arr[Qi.back()])

            Qi.pop_back();

        Qi.push_back(i);
    }

    for (; i < n; ++i)
    {
     
        res.push_back(arr[Qi.front()]);
 
        while ((!Qi.empty()) && Qi.front() <=i - k)

            Qi.pop_front();
 
        while ((!Qi.empty()) && arr[i] >=
                             arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }
    res.push_back(arr[Qi.front()]);
    return res;
    }
