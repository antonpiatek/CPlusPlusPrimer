#include <iostream>
using namespace std;

string conversion ="0123456789ABCDEF";

// worth noting the whole thing can be cheated apparently by using
// cout << hex << cin.get(c)
int main ()
{
  char c;
  // Can't use 'cin >> c' as it skips whitespace
  while( cin.get(c) ){
    int decimal = static_cast<int> (c);
    int a = decimal / 16;
    int b = decimal % 16;
    cout << conversion[a] << conversion[b];
  }
  cout << "\n";
}
