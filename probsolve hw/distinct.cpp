#include<iostream>
#include<list>
#include<numeric>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> l;
    list<int> ans;
    list<int>::iterator it;
    int price;
    for (int i = 0; i < n; i++)
    {
        cin >> price;
        l.push_back(price);
    }
    /*
    10
    10 10
    10 10 5
    10 10 5 15
    10 
    10 5
    10 5 15
    5
    5 15
    15
    */
    
    for (auto i = l.begin();i != l.end();++i)
    {
        it = i;
        int sum = 0;
        while (it != l.end())
        {
            sum += *it;
            if (*find(ans.begin(),ans.end(),sum) != sum)
            {
                ans.push_back(sum);
            }
            ++it;
        }        
    }
    cout << ans.size();
    
    
}