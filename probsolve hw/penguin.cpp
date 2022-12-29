#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i+1;
        while (j<n)
        {
            if (A[i]<A[j]) {
                count++;
            }
            j++;
        }
    }
    cout << count;
}