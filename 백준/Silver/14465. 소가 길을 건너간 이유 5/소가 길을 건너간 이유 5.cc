using namespace std;

#include <iostream>
#include <algorithm>

// 슬라이딩 윈도우

bool arr[100000];

int main()
{
    int N, K, B;
    cin >> N >> K >> B;
    
    int s = 0;
    int e = K-1;
    int total = 0;
    int ans = 9999999;
    
    for(int i = 0; i < B; i++)
    {
        int num;
        cin >> num;
        arr[num] = true;
    }
    
        
    for(int i = 0; i < K; i++)
    {
        if(arr[i])
        {
            total++;
        }
    }
    
    while(e < N)
    {
        s++;
        e++;
        
        if(arr[e])
        {
            total++;
        }
        
        if(arr[s-1])
        {
            total--;    
        }
        
        ans = min(total,ans);
    }
    
    cout << ans;
    return 0;
}