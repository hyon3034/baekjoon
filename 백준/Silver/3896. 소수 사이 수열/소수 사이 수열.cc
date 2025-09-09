using namespace std;

#include <iostream>

// 에라토스테네스의 체
// flase가 소수
bool isPrime[2000000];

int main()
{
    int N;
    cin >> N;
    
    isPrime[0] = true;
    isPrime[1] = true;
    
    for(long long i = 2; i < 2000000; i++)
    {
        if (isPrime[i])
            continue;
            
        for(long long j = i*i; j < 2000000; j += i)
        {
            isPrime[j] = true;
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        
        if(!isPrime[num])
        {
            cout << "0" << endl;
        }
        else
        {
            int front = num - 1;
            int back = num + 1;
            
            while(front > 0)
            {
                if(!isPrime[front])
                    break;
                    
                front--;
            }
            
            while(back < 2000000)
            {
                if(!isPrime[back])
                    break;
                    
                back++;
            }
            
            cout << back-front << endl;
        }
    }
    return 0;
}