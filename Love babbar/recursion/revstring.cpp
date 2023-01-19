#include <bits/stdc++.h>
using namespace std;

void rev(string &s, int i, int j)
{
      cout << "Call recieved for " << s << endl;

      // base caase
      if (i > j)
            return;

      swap(s[i], s[j]);
      cout << endl
           << s;
      i++;
      j--;

      // recursive call
      rev(s, i, j);
}

main()
{
      string s;
      cout << "Enter string : ";
      getline(cin, s);

      cout << "Before reverseing : ";
      cout << s << endl;

      rev(s, 0, s.length() - 1);

      cout << "\nAfter reverseing : ";
      cout << s;
}