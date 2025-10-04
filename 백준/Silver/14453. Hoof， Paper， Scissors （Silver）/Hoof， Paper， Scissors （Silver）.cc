using namespace std;

#include <iostream>
#include <algorithm>

int P[100001];
int S[100001];
int H[100001];

int main()
{
    int N;
    int ans = -1;
    
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        char cha;
        cin >> cha;
        
        if(cha == 'P')
        {
            P[i]++;
        }
        else if(cha == 'H')
        {
            H[i]++;
        }
        else if(cha == 'S')
        {
            S[i]++;
        }
        
        P[i] += P[i-1];
        H[i] += H[i-1];
        S[i] += S[i-1];
    }
    
    for(int i = 1; i <= N; i++)
    {
        ans = max({ans, P[i] + (S[N] - S[i-1]), P[i] + (H[N] - H[i-1])});
        ans = max({ans, S[i] + (P[N] - P[i-1]), S[i] + (H[N] - H[i-1])});
        ans = max({ans, H[i] + (P[N] - P[i-1]), H[i] + (S[N] - S[i-1])});
    }
    
    cout << ans;

    return 0;
}
