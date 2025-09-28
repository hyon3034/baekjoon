using namespace std;

#include <iostream>
#include <algorithm>
#include <climits>

int arr[601];

// 투포인터
int main()
{
    int N;
    int ans = INT_MAX;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr,arr+N);
    
    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            int sum = arr[i] + arr[j];
            int s = 0;
            int e = N-1;
            
            while( s < e )
            {
                if(s == i || s == j)
                {
                    s++;
                    continue;
                }
                
                if(e == i || e == j)
                {
                    e--;
                    continue;
                }
                
                ans = min(ans, abs(sum - (arr[s] + arr[e])));
                
                if(arr[s] + arr[e] > sum)
                {
                    e--;
                }
                else if(arr[s] + arr[e] < sum)
                {
                    s++;
                }
                else
                {
                    cout << "0";
                    return 0;
                }
                
            }
        }
    }
    
    cout << ans;
    
    return 0;
}