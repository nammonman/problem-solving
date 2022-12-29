#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string input;
    string home = "";
    string end = "";
    string temp = "";
    string::iterator it;
    int caretpos = 1; // 1 = back 0 = front
    char c;
    
    while (1)
    {
        cin >> input;
        if (input=="0")//how 2 detect eof lol
        {
            break;
        }
        for (it = input.begin();it != input.end();++it)
        {
            c = *it;
            if (c == '[' )// home moves the caret to the front
            {
                caretpos = 0;
                home = temp+home;
                temp = "";
            }
            else if (c == ']')// end moves the caret to the back
            {
                caretpos = 1;                
                home = temp+home;
                temp = "";                                
            }
            if (caretpos == 1)
            {
                end = end + *it;
            }
            else 
            {
                temp = temp + *it;
            }         
        }

    }
    home = temp + home;
    input = home + end;
    input.erase(remove(input.begin(),input.end(),'['),input.end());
    input.erase(remove(input.begin(),input.end(),']'),input.end());
    cout << input;
}
