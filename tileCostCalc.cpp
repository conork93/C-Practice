//Conor Kennedy
//6/5/2017

/*
Find Cost of Tile to Cover W x H Floor 
Calculate the total cost of tile it would 
take to cover a floor plan of width and height, 
using cost entered by the user.
*/

#include <iostream>
using namespace std;

int main(){
  
  int width, height;
  double cost;
  
  double totalCost(int width, int height, double cost);
  
  cout << "Enter width, height, and tile cost (seperated by spaces): ";
  cin >> width >> height >> cost;
  cout << "The total cost to cover a "<< width <<" x " << height<< " floor is "<< totalCost(width, height, cost)<<" dollars";
  
}

 double totalCost(int width, int height, double cost){
    double total = 0.0;
    total = (width * height) * cost;
    return total;
  }
