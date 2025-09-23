using namespace std;

#include <iostream>
#include <algorithm>

// 투포인터

int arr[100000];

int main()
{
    int n;
    int x;
    int ans = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cin >> x;
    
    sort(arr,arr+n);

    int s = 0;
    int e = n-1;
    
    while(s < e)
    {
        if(arr[s] + arr[e] == x)
        {
            s++;
            e--;
            ans++;
        }
        else if(arr[s] + arr[e] > x)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    
    cout << ans;
    
    return 0;
}