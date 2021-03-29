//APPROACH-1 O(n^2)
//APPROACH-2 O(n)

//APPROACH-1
#include <iostream>
using namespace std;
int main()
{
char input[100];
cin.getline(input,100);

int length=0;
while(input[length]!='\0')
  length++;

int j=length-1;
while(input[j]>=0)
{
  if(input[j]== ' ' || j==0)
  {
    int k{};
    if(j!=0)
      k=j+1;
    else
      k=j;
    while(input[k]!=' ' && k<length)
      {
        cout<<input[k];
        k++;
      }
      cout<<" ";
  }
  j--;
}
  return 0;
}

// APPROACH-2
// #include <iostream>
// using namespace std;
//
// void reverse(int start,int end,char str[])
// {
//       while(start<=end)
//     {   char temp{};
//         temp=str[start];
//         str[start]=str[end];
//         str[end]=temp;
//         start++;
//         end--;
//     }
//
// }
// int main()
// {
// char input[100];
// cin.getline(input,100);
//
// int length=0;
// while(input[length]!='\0')
//   length++;
//
// int i=0;
// int j=length -1;
//
// while(i<=j)
// {
//   char temp{};
//   temp = input[i];
//   input[i]=input[j];
//   input[j]=temp;
//   i++;
//   j--;
// }
// int n{};
// i=0,j=0;
// while(n <= length)
// {
//   if(input[n]==' ' || n==length)
//     {
//       j=n-1;
//       reverse(i,j,input);
//       i=n+1;
//     }
//     n++;
// }
// cout<<input;
//   return 0;
// }
