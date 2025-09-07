using namespace std; 

#include <iostream>

int main()
{
    int N;
    
    cin >> N;
    
    for(int i = 2; i < N; i++)
    {
        if(i*i > N) 
            break;
        
        while(N % i == 0)
        {
            cout << i << endl;
            N /= i;
        }
    }
    
    if(N != 1)
        cout << N;

    return 0;
}