using namespace std;
#include <iostream>
    
// 최소 공배수 L, 최대 공약수 G
// 1. a,b가 서로소일때, A = aG, B = bG 성립
// 2. L = a*b*G 성립 ( 서로소의 최소 공배수는 a * b 이다 )
// 3. 서로소 a,b를 구하고, 최대 공약수를 곱하기

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	
    int G, L;
    cin >> G >> L;
    
    int divide = L/G;
    
    int ans = 999999999;
    
    int Ansa;
    int Ansb;
    
    for(int i = 1 ; i <= divide ; i++)
    {
        if(i*i > divide)
            break;
        
        int a = i;
        int b = divide / i;
        
        // 서로소인지 확인인
        while(a % b != 0)
        {
            int temp = a;
            a = b;
            b = temp % b;
        }
         
        // 서로소 두개의 합 최소 찾기기   
        if(divide % i == 0 && b == 1)
        {
            if (i + divide / i < ans)
            {
                ans = i + divide / i;
                Ansa = i;
                Ansb = divide / i;
            }
        }
    }
    
    cout << Ansa * G << '\n';
    cout << Ansb * G << '\n';
    
    
    return 0;
}