#include<iostream>
#include<list>
using namespace std;

int main() {
    int n;
    list<int> icList;
    list<int>::iterator it;
    string mode;
    int id;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mode;
        if (mode == "li") // left insert
        {
            cin >> id;
            icList.push_front(id);
        }
        else if (mode == "ri") // right insert
        {
            cin >> id;
            icList.push_back(id);
        }
        else if (icList.size() > 0)
        {
            it = icList.begin();
            if (mode == "lr") // left rotate
            {
                int tmp = *it;
                icList.push_back(tmp);
                icList.erase(it);
                
            }
            else if (mode == "rr") // right rotate
            { 
                advance(it,icList.size()-1);
                int tmp = *it;
                icList.push_front(tmp);
                icList.erase(it);
                
            }  
        }      
    }
    for (it = icList.begin();it!=icList.end();++it)
    {
        cout << *it << '\n';
    }
    
}