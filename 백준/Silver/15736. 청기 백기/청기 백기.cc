using namespace std;

#include <iostream>

int main()
{
    int N;
    int ans = 0;
    
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        if(i*i > N)
            break;
        
        ans++;
    }
    
    cout << ans;
}