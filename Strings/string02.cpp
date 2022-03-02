#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Converting mixed string to fully uppercase/lowercase
// UpperCase to LowerCase : Adding 32
// LowerCase to UpperCase : Subtracting 32

int main()
{

    string s = "asdbjgfas";

    // Converting to Uppercase
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }

    cout <<"UpperCase String is " << s<<endl;
    // Converting string to LowerCase

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] >= 'Z')
            s += 32;
       
    };
     cout <<"LowerCase string is" <<s<<endl;
    return 0;
}