#include <iostream>

using namespace std;

void executeExpression(string s, int &x)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '+')
    {
      x++;
      return;
    }
    else if (s[i] == '-')
    {
      x--;
      return;
    }
  }
}

int main()
{
  int n;
  int x =0;
  string s;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    executeExpression(s , x);
  }

  cout << x;

  return 0;
}