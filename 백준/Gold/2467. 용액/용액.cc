using namespace std;

#include <iostream>
#include <algorithm>
#include <climits>

// 투포인터

int arr[1000001];

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        int num;
        cin >> arr[i];
    }
    
    sort(arr,arr+N);
    
    int s = 0;
    int e = N-1;
    
    int max = INT_MAX;
    int ansleft;
    int ansright;
    
    while(s < e)
    {
        if(abs(arr[s] + arr[e]) < max)
        {
            max = abs(arr[s] + arr[e]);
            ansleft = s;
            ansright = e;
        }
            
        if(arr[s] + arr[e] == 0)
        {
            cout << arr[s] << " " << arr[e];
            return 0;
        }
        else if(arr[s] + arr[e] > 0)
        {
            e--;
            
        }
        else if(arr[e] + arr[s] < 0)
        {
            s++;
        }
    }
    
    cout << arr[ansleft] << " " << arr[ansright];
    
    return 0;
}