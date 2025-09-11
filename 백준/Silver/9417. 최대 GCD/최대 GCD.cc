using namespace std;

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main()
{
    int N;
    cin >> N;
    
    // 공백을 무시하는 기능
    cin.ignore();
    
    for(int i = 0; i < N; i++)
    {
        int ans = 1;
        
        vector<int> vec;
        string str;
        string num;
        
        // cin으로 한 줄 전체를 읽어서 str 에 저장
        getline(cin, str);
        
        // 문자열을 스트림으로 변환
        // 커서를 맨 앞에 둠
        stringstream sstream(str);

        // 공백을 기준으로 nums에 넣는다
        while(getline(sstream, num, ' ')) 
        {
            vec.push_back(stoi(num));
        }
        
        for(int j = 0; j < vec.size()-1; j++)
        {
            for(int k = j+1; k < vec.size(); k++)
            {
                int a = vec[j];
                int b = vec[k];
                
                while(a % b != 0)
                {
                    int temp = a;
                    a = b;
                    b = temp % b;
                }
                
                ans = max(ans, b);
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}