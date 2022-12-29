#include<iostream>
#include<list>

using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> performance;
    list<int>::iterator it,max;
    int p,pe;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> pe;
        performance.push_front(pe);
    }
    // if performance less than other car with less price then count +1
    int count = 0;
    max = performance.begin();
    for (it = performance.begin();it != performance.end();++it)
    {
        if (*max < *it)
        {
            max = it;
        }
        else if (*max > *it)
        {
            count++;
        }       
    }
    cout << count;
}