using namespace std; 

#include <iostream>

// 에라토스테네스의 체
bool isPrime[1001];
    
int main()
{
    int N;
    int ans = 0;
    
    cin >> N;
    
    // false가 소수다
    isPrime[0] = true;
    isPrime[1] = true;
    
    for(int i = 2 ; i < 1001; i++)
    {
        if(isPrime[i])
            continue;
            
        for(int j = i*i; j < 1001; j += i)
        {
            isPrime[j] = true;
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        
        if(!isPrime[num])
            ans++;
    }
    
    cout << ans;
    
    return 0;
}