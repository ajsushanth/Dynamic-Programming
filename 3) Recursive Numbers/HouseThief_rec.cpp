#include <iostream>
#include <vector>
using namespace std;

int robbery(int i, vector<int>& money){
  if(i >= money.size()) return 0;

  return max(robbery(i+2, money) + money[i], robbery(i+1, money));

}

int HouseThief(vector<int>& money){
  //your code will replace the placeholder return statement below
  int i=0;
  return robbery(i, money);
}