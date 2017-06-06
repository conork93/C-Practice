//Conor Kennedy
//6/6/2017

/*
Collatz Conjecture - Start with a number n > 1.
Find the number of steps it takes to reach one 
using the following process: If n is even, divide
it by 2. If n is odd, multiply it by 3 and add 1.
*/

#include <iostream>
using namespace std;

int main(){
  
  int num;
  int collatz(int num);
  
  cout << "Enter a number to find the Collatz Conjecture: ";
  cin >> num;
  cout << "It took "<< collatz(num) << " steps to reach 1\n";
}

int collatz(int num){
  int count = 0;
  while(num != 1){
    if(num % 2 ==0){
      num = num/2;
      ++count;
    }
    else{
      num = (num * 3) + 1;
      ++count;
    }
  }
  return count;
}
