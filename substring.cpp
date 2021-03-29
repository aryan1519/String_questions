#include<iostream>
#include <cstring>
using namespace std;

  void printSubstrings(char str[])
  {

  int length= strlen(str);

  for(int i=0;i<length;i++)
  {
    for(int k=i;k<length;k++)
    {
      for(int j=i;j<=k;j++)
      {
        cout<<str[j];
      }
      cout<<endl;
    }
  }
  }
int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}
