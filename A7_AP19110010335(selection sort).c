#include <stdio.h>
void SelSort(int arr[],int n);
int main()
{
int arr[100], n,i;
printf("Enter how many elements you need=");
scanf("%d", &n);
printf("%d", n);
for(i = 0; i < n; i++)
scanf("%d", &arr[i]);
SelSort(arr,n);
return 0;
}
void SelSort(int arr[], int n)
{
int i, j, pos, temp;
for(i = 0; i < (n-1); i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(arr[pos]>arr[j])
pos=j;
}
if(pos != i)
{
temp=arr[i];
arr[i]=arr[pos];
arr[pos]=temp;
}
}
printf("Sorted Array:n");
for(i = 0; i < n; i++)
printf("%dn", arr[i]);
}