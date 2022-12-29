#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l,n;
    cin >> l >> n;
    int a[601];
    for (int i = 0; i <= 601; i++)
    {
        a[i] = 0;
    }
    
    int start,end;
    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        for (int j = (start*2)+1; j < end*2; j++)
        {
            a[j]++;
        }       
    }
    cout << *max_element(a,a+601);


}