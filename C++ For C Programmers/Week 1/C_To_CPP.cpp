// Convert this program to C++ 
//change to C++ io 
//change to one line comments 
//change defines of constants to const
//change array to vector<>
//inline any short function

//Changed the C++ io
#include <iostream>
#include <vector>

using namespace std;
const int N = 40; //Changed macro to constants

inline void sum(int &p, vector<int> &d) //Change the small function to an inline function
{
  p = 0; 
  for (vector<int>::iterator it = d.begin(); it != d.end(); ++it) 
    p = p + *it; 
}

int main()
{
  int accum = 0;  //This will store the total accumulated value
  vector<int> data; //Using vector in place of array

  for (int i = 0; i < N; ++i) 
    data.push_back(i); 
  sum(accum, data); 
  cout << "sum is " << accum << endl; 
  return 0;
}