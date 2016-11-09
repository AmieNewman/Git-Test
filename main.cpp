//Amie Newman
//11/8/2016
//main.cpp
//Simple Hello-world file

using namespace std;

#include <iostream>

int sum(int n);

int main(){
  cout << "Hello World" << endl;
  cout << "Give me a number" << endl;
  int n=0;
  cin >> n ;
  cout << sum(n) << endl;
  cout << "Done with program" << endl;
  
  

}
int sum(int n){
  int j=0;
  for(int i=0; i <= n ; i++){
    j += i;
  }

  return j;
}
