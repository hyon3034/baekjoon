using namespace std;

#include <iostream>

int arr[100001];
int prefix[100001];

// 누적합
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    int ans = -99999999;
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        prefix[i] = arr[i] + prefix[i-1];
    }
    
    for(int i = M; i <= N; i++)
    {
        ans = max(ans,prefix[i] - prefix[i-M]);
    }
    
    cout << ans;
    
    
    return 0;
}