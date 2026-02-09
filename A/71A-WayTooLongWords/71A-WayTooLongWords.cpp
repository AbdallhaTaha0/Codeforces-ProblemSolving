#include <iostream>

using namespace std;

string makeAbbreviation(string s)
{
  if (s.length() <= 10)
  {
    return s;
  }

  char firstChar = s[0];
  char lastChar = s[s.length() - 1];
  int lettersNo = s.length() - 2;

  return string(1, firstChar) + to_string(lettersNo) + string(1, lastChar);
}

int main()
{
  int count = 0;
  string s;
  cin >> count;
  for (int i = 0; i < count; i++)
  {
    cin >> s;
    cout << makeAbbreviation(s) << endl;
  }
  


  return 0;
}