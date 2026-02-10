#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
  return a + b +c;
}

int main()
{
  int p = 0, a = 0, b = 0, c = 0 ,r =0;
  
  cin >> p;
  for (int i = 0; i < p; i++)
  {
    cin >> a >> b >> c;
    if (sum(a ,b ,c) > 1)
    {
      r++;
    }
  }

  cout << r;
  return 0;
}