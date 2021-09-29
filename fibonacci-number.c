#include<stdio.h>

int arr[20001][1000], k=1;

void find_fibonacci(int n)
{
  //adding two numbers in row-wise
   while(k<n)
   {
     int var=arr[k][j]+arr[k-1][j]+carry;
     carry=var/10;
     var=var%10;
     arr[k+1][j]=var;
   }
  k++;
}
int i=0;

while(arr[n][i]==0 &&i<1000)
  i++; //skipping preceding zero
for(;i,100;i++)
{
  printf("%d",arr[n][i];
         }
         printf("\n');
                }
                int main()  //Driver code
                {
                  
                  arr[1][999]=1;
                  int n;
                  scanf("%d",&n);
                  find_fibonacci(n);
                  return 0;
                }
     
