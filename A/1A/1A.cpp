#include <iostream>

using namespace std;

int main(){

  long long n,m,a;
  long long lengthUnits, widthUnits;
  cin >> n >> m >>a;
  if(n % a != 0){
    lengthUnits = (n /a )+1;
  }else{
    lengthUnits = n /a ;
  }

  if(m % a != 0){
    widthUnits = (m /a )+1;
  }else{
    widthUnits = m /a ;
  }
  
  cout << lengthUnits * widthUnits << endl ;
  
  return 0;
}