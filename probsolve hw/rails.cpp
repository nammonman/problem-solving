#include<iostream>
#include<stack>
#include<list>
using namespace std;

int main() {
    int n;
    stack<int> l;
    string result = "";
    while (1) // use stack instead
    {
        cin >> n;
        if (n == 0)
        {
            result = result+"\n";
            break;
        }            
               
        while (1)
        {
            int cargoNum;
            int last = 0;
            int ans = 1;
            for (int i = 0; i < n; i++)
            {           
                cin >> cargoNum;
                if (cargoNum == 0)
                {
                    break;
                }
                else if (cargoNum > last)
                {
                    for (int j = last; j < cargoNum; j++)
                    {
                        l.push(j+1);
                    }
                    l.pop();
                    last = cargoNum;
                }
                else if (cargoNum < last)
                {
                    if (l.top() != cargoNum)
                    {
                        ans = 0;
                    }
                    l.pop();                    
                }                
            }
            if (cargoNum == 0)
            {
                result = result+"\n";
                break;
            }
            if (ans)
            {
                result = result + "Yes\n";
            }
            else
            {
                result = result + "No\n";
            }
            
                            
        }       
    }
    cout << result;
    
}