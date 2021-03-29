#include <iostream>
#include <string>
using namespace std;

int main()
{

string sen{};
getline(cin,sen);
cout<<sen<<endl;
sen.erase(4,(sen.length()-1));
cout<<sen<<endl;

  return 0;
}
