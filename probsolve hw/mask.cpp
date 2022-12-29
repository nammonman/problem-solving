#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lvl;
    list<int> result;
    int temp;
    for (int i = 0; i < 4*n; i++) 
    {
        cin >> temp;
        lvl.push_back(temp);
    }    
    if (n!=1) // first round
    {
        for (int i = 0; i < n*4; i+=n) 
        {
            int max = *max_element(next(lvl.begin(),i),next(lvl.begin(),i+n));
            for (int j = i; j < n+i; j++)
            {
                if (lvl[j] != max)
                {
                    lvl[j] = 0;
                }                
            }                               
        }
    }    
    int flag = 0;
    int c1,c2;
    int i1,i2;
    vector<int> finalists;
    vector<int> jinalists;
    while (result.size()<2) // rest
    {
        for (int i = 0; i < n*4; i++)
        {
            if (lvl[i] != 0)
            {
                if (flag == 0)
                {
                    c1 = lvl[i];
                    i1 = i;            
                    flag++;
                }
                else if (flag == 1)
                {
                    c2 = lvl[i];
                    i2 = i;
                    flag++;
                }           
            }
            
            if (flag == 2)
            {
                if (c1 > c2)
                {                    
                    result.push_back(i2+1);
                    finalists.push_back(c1);
                    jinalists.push_back(i1);
                    lvl[i2] = 0;
                }
                else
                {
                    result.push_back(i1+1);
                    finalists.push_back(c2);
                    jinalists.push_back(i2);
                    lvl[i1] = 0;     
                }
                flag = 0;
            }
            
        }
        
    }
    if (finalists.front() > finalists.back())
    {
        result.push_front(jinalists.back()+1);
        result.push_front(jinalists.front()+1);
    }
    else
    {
        result.push_front(jinalists.front()+1);
        result.push_front(jinalists.back()+1);
    }
    
    

    for (auto i = result.begin(); i !=result.end(); i++)
    {
        cout << *i << " ";
    }
    
}