using namespace std;
#include <iostream>

int board[1001][1001];
    
// 해당 점의 x,y의 최대 공약수가 1인 갯수 찾기
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	
    int C;
    cin >> C;
    
    for(int j = 1; j <= 1000; j++)
    {
        for(int k = 1; k <= 1000; k++)
        {
            int a = j;
            int b = k;
                
            while(a % b != 0)
            {
                int temp = a;
                a = b;
                b = temp % b;
            }
                
            if( b == 1 )
                board[j][k] = 1;
        }
    }
        
    for(int i = 0; i < C; i++)
    {
        int N;
        int ans = 0;
        cin >> N;
        
        for(int j = 1; j <= N; j++)
        {
            for(int k = 1; k <= N; k++)
            {
                if(board[j][k])
                    ans++;
            }
        }
        
        // ( 0,1 ), ( 1,0 ) => 2개
        cout << ans + 2 << '\n';
    }
    
    return 0;
}