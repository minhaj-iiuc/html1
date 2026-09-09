#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        

        int pos = upper_bound(a.begin(), a.end(), x) - a.begin()+1;
        
        cout << pos << '\n'; 
    }
    
    return 0;
}