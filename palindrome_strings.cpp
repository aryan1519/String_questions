#include <iostream>
using namespace std;
int main()
{
string word{};
cin>>word;
int i=0,j=word.length()-1;
while(i<=j)
{
  if(word[i]!=word[j])
  {
    cout<<"not palindrome";
    return 0;
  }
  i++;
  j--;
}
cout<<"palindrome";
return 0;
}
