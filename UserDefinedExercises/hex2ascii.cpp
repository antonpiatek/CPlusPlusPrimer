#include <iostream>
using namespace std;

string conversion ="0123456789ABCDEF";

//Can also shortcut this one with something like
//cin >> hex >> n; 
int main ()
{
  char a,b;
  while( cin >> a >> b){
    int i = conversion.find(a) * 16 + conversion.find(b);
    cout << static_cast<char>(i);
  }
  cout <<"\n";
}
