#include <iostream>
#include <climits>
using namespace std;

int FindSecondLargest(int arr[], int n){

int max{INT_MIN+1},secondmax{INT_MIN};

for(int i=0;i<n;i++)
{
  if(arr[i]>max)
    {
      secondmax=max;
      max =arr[i];
    }
  else if(arr[i]>secondmax && arr[i]!=max)
    {
      secondmax=arr[i];
    }
}
return secondmax;

}


int main()
{
  int n{};
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<FindSecondLargest(arr,n);
}
