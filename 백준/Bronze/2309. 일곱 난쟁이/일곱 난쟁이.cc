using namespace std;

#include <iostream>
#include <algorithm>

// 투포인터 사용
int main()
{
    int arr[9];
    int s = 0;
    int e = 8;
    int sum = 0;
    
    for(int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    sort(arr,arr+9);
    
    
    while(s < e)
    {
        int temp = sum;
        temp -= arr[s];
        temp -= arr[e];
        
        if(temp == 100)
        {
            for(int i = 0; i < 9; i++)
            {
                if(i == s || i == e)
                    continue;
                    
                cout << arr[i] << '\n';
            }
            
            break;
        }
        else if(temp > 100)
        {
            s++;
        }
        else
        {
            e--;
        }
        
    }

    return 0;
}