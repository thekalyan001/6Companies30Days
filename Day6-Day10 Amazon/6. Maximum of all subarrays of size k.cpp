//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1#

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
