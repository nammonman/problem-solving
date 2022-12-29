#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bowls[n];
    for (int i = 0; i < n; i++)
    {
        cin >> bowls[i];
    }
    sort(bowls,bowls+n,greater<int>());
    int max = 1;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (bowls[i-1] == bowls[i]) {
            count++;
            if (count > max)
            {
                max = count;
            }           
        } else {
            count = 1;
        }
    }
    cout << max;
}