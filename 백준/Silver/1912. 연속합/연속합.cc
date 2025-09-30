using namespace std;

#include <iostream>
#include <climits>

int arr[100001];
int prefix[100001];

// 누적합
int main()
{
    int N;
    int ans = INT_MIN;
    cin >> N;

    for(int i = 1 ; i <= N; i++)
    {
        cin >> arr[i];
        
        if(prefix[i-1] + arr[i] < arr[i])
        {
            prefix[i] = arr[i];
        }
        else
        {
            prefix[i] = prefix[i-1] + arr[i];
        }

        ans = max(ans, prefix[i]);
    }
    
    cout << ans;
    
    return 0;
}