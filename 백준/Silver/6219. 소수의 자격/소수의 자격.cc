using namespace std;

#include <iostream>

// 에라토스테네스 체 사용
// Flase가 소수를 의미
bool isPrime[4000001];

int main()
{
    int A, B, C;
    int ans = 0;
    
    cin >> A >> B >> C;
    
    isPrime[0] = true;
    isPrime[1] = true;
    
    // long long = 8 bytes
    // long, int = 4 bytes
    for(long long i = 2; i < 4000001; i++)
    {
        if(isPrime[i])
            continue;
            
        for(long long j = i * i; j < 4000001; j += i)
        {
            isPrime[j] = true;
        }
    }
    
    for(int i = A; i <= B; i++)
    {
        int num = i;
        
        if(isPrime[num])
           continue; 
            
        while(num)
        {
            if((num % 10) == C)
            {
                ans++;
                break;
            }
                
            num /= 10;
        }
    }
    
    cout << ans;
    
    return 0;
}