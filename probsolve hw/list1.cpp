#include<iostream>
#include<list>
using  namespace std;

int main() {
    int n;
    list<int> l;
    list<int>::iterator it;
    cin >> n;
    char mode;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> mode >> num;
        it = l.begin();
        if (mode == 'I')
        {
            l.push_front(num);
        }
        else if (mode == 'D')
        {
            if (num > l.size())
            {
                continue;
            }
            if (num > 0)
            {
                advance(it,num-1);
            }
            l.erase(it);
        }     
    }
    for (it = l.begin();it!=l.end();++it)
    {
        cout << *it << '\n';
    }
    
}