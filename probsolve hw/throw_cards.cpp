#include<iostream>
#include<list>
using namespace std;

int main() {
    //use list<int> to 
    //pop_front 
    //push_back copy of front then pop_front again
    int n;
    list<int> l;
    string s = "";
    while (1)
    {
        cin >> n;
        if (n == 0) 
        {
            break;
        } 
        
        for (int i = 1; i <= n; i++)
        {
            l.push_back(i);
        }
        s = s+ "Discarded cards:";
        while (l.size() > 1)
        {
            s = s+" ";
            s = s+ to_string(l.front());
            l.pop_front();
            l.push_back(l.front());
            l.pop_front();
            if (l.size() > 1) {
                s = s+ ",";
            }
        }
        s = s+ '\n';
        s = s+ "Remaining card: ";
        s = s+ to_string(l.front());
        s = s+ '\n';
        l.clear();        
    }
    cout << s;
}