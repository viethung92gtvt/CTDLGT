#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;

    cin >> s;

    string s1 = "";

    for (auto z : s)
    {
        if (isupper(z))
        {
            s1 += tolower(z);
        }

        else if (islower(z))
        {
            s1 += toupper(z);
        }
    }

    string s2 = "";

    for (auto z : s)
    {
        s2 += toupper(z);
    }

    string s3 = "";

    for (auto z : s)
    {
        s3 += tolower(z);
    }

    string s4 = "";

    for (auto z : s)
    {
        if (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u')
        {
            s4 += z;
        }
        else
        {
            s4 += toupper(z);
        }
    }

    string s5 = "";

    for (size_t i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            s5 += toupper(s[i]);
        }
        else if(i % 2 != 0 )
        {
            s5 += tolower(s[i]);
        }
    }
    cout << s << "\n";
    cout << s1 << "\n";
    cout << s2 << "\n";
    cout << s3 << "\n";
    cout << s4 << "\n";
    cout << s5 << "\n";

    return 0;
}
