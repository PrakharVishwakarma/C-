// Merge two Max heaps.

#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &v, int i, int n){
    while (true)
    {
        int left = 2*i + 1;
        int right = 2*i + 2;
        int swapIndex = i;
        if (left < n && v[left] > v[i])
            swapIndex = left;
        
        if (right < n && v[right] > v[swapIndex])
            swapIndex = right;
        
        if (swapIndex == i)
            break;
        
        swap(v[i], v[swapIndex]);
        i = swapIndex;
    }
    
}
vector<int> mergeTwoHeaps(vector<int> &a, vector<int> &b){
    vector<int>c(a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    for (int i = (c.size()/2)-1 ; i >= 0; i--)
    {
        heapify(c, i, c.size());
    }
    return c;
}
int main()
{
    vector<int> a = {50, 40, 30, 20, 10, 15, 7, 5};
    vector<int> b = {45, 35, 27, 32, 23, 22};
    vector<int> ans = mergeTwoHeaps(a, b);
    
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

return 0;
}