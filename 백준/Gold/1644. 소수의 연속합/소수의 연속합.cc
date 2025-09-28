using namespace std;

#include <iostream>
#include <algorithm>
#include <vector>

bool isPrime[4000001];
vector<int> vec;

int main()
{
    int N;
    cin >> N;
    
    // 에라토스테네스의 체
    // false가 소수
    
    isPrime[0] = true;
    isPrime[1] = true;
    
    for(int i = 2; i < 4000001; i++)
    {
        if(isPrime[i])
        {
            continue;
        }
        
        for(int j = 2 * i; j < 4000001; j += i)
        {
            isPrime[j] = true;
        }
    }
    
    for(int i = 2; i < 4000001; i++)
    {
        if(!isPrime[i])
        {
            vec.push_back(i);
        }
    }
    
    // 투포인터
    int s = 0;
    int e = 0;
    int total = vec[e];
    int ans = 0;
    
    while(e < vec.size())
    {
        if(total == N)
        {
            ans++;
            e++;
            total += vec[e];
        }
        else if(total < N)
        {
            e++;
            total += vec[e];
        }
        else
        {
            total -= vec[s];
            s++;
        }
    }
    
    cout << ans;
    
    return 0;
}