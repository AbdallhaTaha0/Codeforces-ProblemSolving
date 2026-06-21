#include <iostream>
#include <cstdlib>  
using namespace std;

int main(){

  int m[5][5];
  int locationXForOne ,locationYForOne;
  for(int i =0 ; i< 5;i ++){
    for(int j =0 ; j<5;j++){
      cin >>m[i][j];
      if(m[i][j] == 1){
        locationXForOne = i + 1;
        locationYForOne = j + 1;
      }
    }
  }

  int result = abs(locationXForOne - 3) + abs(locationYForOne - 3);
  cout << result <<endl;


  return 0;
}