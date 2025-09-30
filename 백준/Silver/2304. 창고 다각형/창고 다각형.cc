using namespace std;

#include <iostream>
#include <climits>
#include <algorithm>

int arr[1001];
int front[1001];
int back[1001];

int main()
{
    int N;
    int ans = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        int L, H;
        cin >> L >> H;
        
        arr[L] = H;
    }
    
    int MIN = INT_MIN;
    int MAX = INT_MAX;
    
    for(int i = 1; i <= 1000; i++)
    {
        if(MIN < arr[i])
        {
            MIN = max(arr[i], MIN);
        }
        
        front[i] = MIN;
    }
    
    MIN = INT_MIN;
    
    for(int i = 1000; i >= 1; i--)
    {
        if(MIN < arr[i])
        {
            MIN = max(arr[i], MIN);
        }
        
        back[i] = MIN;
    }
    
        
    for(int i = 1; i <= 1000; i++)
    {
        ans += min(front[i], back[i]);
    }
    
    cout << ans;
    
    return 0;
}