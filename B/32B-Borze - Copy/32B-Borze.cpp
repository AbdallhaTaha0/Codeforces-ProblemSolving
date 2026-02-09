#include <iostream>

using namespace std;

string decodeBorze(string s)
{
  string r = "";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '.')
    {
      r += '0';
    }
    else if (s[i] == '-' && s[i+1] == '.')
    {
      r += '1';
      i++;
    }
    else if (s[i] == '-' && s[i+1] == '-')
    {
      r += '2';
      i++;
    }
  }

  return r;
}

int main()
{
  string s ;

  cin >> s;
  cout << decodeBorze(s);
  return 0;
}