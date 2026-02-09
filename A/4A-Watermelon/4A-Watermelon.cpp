#include <iostream>
using namespace std;

bool checkIfCanDivided(int w){
  return (w > 2 && w % 2 == 0);
}


int main (){

  int w = 0;
  cin >> w ;
  cout << (checkIfCanDivided(w)? "YES" : "NO") ;
  return 0;
}