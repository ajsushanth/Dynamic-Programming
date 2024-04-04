#include <iostream>
#include <vector>
using namespace std;

int robbery(int i, int sum, vector<int>& money){
  if(i >= money.size()) return sum;

  return robbery(i+2, sum + money[i], money) + robbery(i+1, sum, money);

}

int HouseThief(vector<int>& money){
  //your code will replace the placeholder return statement below
  int i=0;
  int sum = 0;
  return robbery(i, sum, money);
}