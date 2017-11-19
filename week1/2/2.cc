#include <iostream>
using namespace std;

bool promptGet(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input
    return getline(in, str);
}

void process(string &str){

}

int main()
{
  string str;
  while (promptGet(cin, str))
      process(str);
}
