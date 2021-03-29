//check for space in the beginning of the sentence.

#include <iostream>
#include <string>
using namespace std;

int main()
{

string sen{};
getline(cin,sen);

for(int i=sen.length()-1;i>=0;i--)
{
  if(sen[i]==' ' || i==0)
  {
    for(int j=i;j<=sen.length();j++)
    {
      cout<<sen[j];
    }
    sen.erase(i,sen.length());
    i=sen.length()-1;
  }
}
  return 0;
}
