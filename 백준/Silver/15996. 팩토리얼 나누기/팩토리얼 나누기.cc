using namespace std;
#include <iostream>

// N에서 특정 수 A의 배수가 몇개 있는지 찾는 방법
// N / A + N / A^2 + N / A^3 ...

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, A;
    int ans = 0;
    
    cin >> N >> A;
    
    for(long long i = A; i <= N; i *=A)
    {
        ans += N / i;
    }
    
    cout << ans;

    return 0;
}