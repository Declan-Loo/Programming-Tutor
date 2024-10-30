#include <iostream>
using namespace std;

int main(){
  int n = 100;
  int i = 0;
  while(n != 0){
    n = n / 2;
    i++;
  }

  cout << "The number of iterations is: " << i << endl;
}