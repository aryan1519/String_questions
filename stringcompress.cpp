#include <bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;

void stringCompression(char input[])
{
    int n = strlen(input);
      string s;
      char t[100];
      char c{};
    for (int i = 0,k=0; i < n; i++) {

        // Count occurrences of current character
        int count = 1;
        t[k]=input[i];
        k++;
        while (i < n - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        c='0'+count;
        if(count>1)
        {  t[k]=c;
            k++;
          }

    }
    for(int i=0;i<n;i++)
    {
      input[i]=t[i];
    }
    cout<<input;

}


  int main() {
      char input[1000];
      cin.getline(input, 1000);
      stringCompression(input);

  }
