#include<iostream>
#include<list>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> l[100001];
    list<int>::iterator it;
    char mode;
    int firstNum,secNum;
    for (int i = 0; i < n; i++)
    {
        cin >> mode >> firstNum >> secNum;
        if (mode == 'N')
        {
            l[secNum-1].push_back(firstNum);//firstNum = train, secNum = platform
        }
        else if (mode == 'M') 
        {
            l[secNum-1].splice(l[secNum-1].end(),l[firstNum-1]);//firstNum = from platform, secNum = to platform        
        }       
    }
    for (int i = 0; i < 100001; i++)
    {
        if (!l[i].empty())
        {
            for (it=l[i].begin(); it!=l[i].end(); it++)
            {
                cout << *it << '\n';
            }
        }
        
    }
    
}