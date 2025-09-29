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
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        prefix[i] = arr[i] + prefix[i-1];
    }
    
    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        
        cout << prefix[b] - prefix[a-1] << '\n';
    }
    
    
    return 0;
}