using namespace std;

#include <iostream>
#include <algorithm>

// 투포인터 자벌레 

int arr[10000];

int main()
{
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int s = 0;
    int e = 0;
    int total = arr[0];
    int ans = 0;
    
    while(e < n)
    {
        if(total < m)
        {
            e++;
            total += arr[e];
        }
        else if(total > m)
        {
            total -= arr[s];
            s++;
        }
        else
        {
            ans++;
            total -= arr[s];
			s++;
			e++;
			total += arr[e];
        }
    }
    
    cout << ans;

    return 0;
}