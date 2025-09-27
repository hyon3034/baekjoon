using namespace std;

#include <iostream>

// 슬라이딩 윈도우
int arr[30];

int main()
{
    int N;
    string str;
    cin >> N >> str;
    
    // count는 알파벳 종류 수
    int count = 0;
    int ans = 0;
 
    int s = 0;
    int e = 0;
    
    while(e < str.length())
    {
        if(arr[str[e] - 'a'] == 0) 
        {
            count++;
        }
        
        arr[str[e] - 'a']++;
        e++;
        
        while(count > N)
        {
            arr[str[s] - 'a']--;
            
            if(arr[str[s] -'a'] == 0) 
            {
                count--;
            }
            
            s++;
        }
        
        if(count <= N)
        {
            ans = max(e-s,ans);
        }
    }
    
    cout << ans;
    
    return 0;
}