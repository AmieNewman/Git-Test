//Amie Newman
//11/8/2016
//main.cpp
//Simple Hello-world file

using namespace std;

#include <iostream>

int sum(int n);
int product(int n);

int main(){
  cout << "Hello World" << endl;
  cout << "Give me a number" << endl;
  int n=0;
  cin >> n ;
  cout << "the sum is:" << sum(n) << endl;
  cout << "the product is:" << product(n) << endl;
  cout << "Done with program" << endl;
  
  

}
int sum(int n){
  int j=0;
  for(int i=0; i <= n ; i++){
    j += i;
  }

  return j;
}
int product(int n){
  int k=0;
  for(int i=0; i <= n; i++){
    k += i;
    
  }
  return k/n;
}
