#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
  srand((unsigned)time(NULL));
  double num = (rand() % 1000);
  double range = 500;
  if (num <= (range))
  {
    cout << num;
    cout << "Random number is within range of 500" << endl;
  }
  else
  {
    cout << num;
    cout << "Random number is not within range of 500" << endl;
  }
  return 0;
}