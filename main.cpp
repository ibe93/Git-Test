#include <iostream>

using namespace std;

void sum(int n);

void product(int n);

int main(){
  
  int x;
  
  cout << "Hello World!" << endl;
  
  cout << "Enter a number: ";
  cin >> x;
  
  sum(x);
  cout << endl;
  product(x);
 
}

void sum(int n){
  int m = 1;
  for(int i = 0; i <= n; i++){
    m = m + i;
    cout << "Result: " << m << endl;
    
  }
}
void product(int n){
    int m = 1;
    for(int i = 1; i <= n; i++){
      m = m * i;
      cout << "Results: " << m << endl;
    }
    
  }
