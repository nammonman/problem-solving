#include <iostream>
using namespace std;

int main() {
    int n,mode;
    cin >> n >> mode;
    int A[n];
    int B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    if (mode == 2)
    {
        for (int i = 1; i < n; i++)
        {
            if (A[i] > 2*A[i-1])
            {
                A[i] = A[i]-2*A[i-1];
            }
            else
            {
                A[i] = A[i]-A[i-1];
            }           
        }       
    }
    if (n+1 == A[0])
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
    for (int i = 1; i < n; i++)
    {
        if (A[i]>A[i-1])
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }       
    }
}