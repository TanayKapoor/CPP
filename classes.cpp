#include <iostream>

int one_more(int a[], int sz);

int main()
{
using namespace std;

int arr[] = {2, 4, 6, 8, 10, 12}, size = 6;
int i, new_num;


for(i = 0; i < size; i++)
{
new_num = one_more(arr, size);
cout << new_num << endl;
}

return 0;
}

int one_more(int a[], int sz)
{
for (int i = 0; i < sz; i++)
{
for (int j = 0; j < sz; j++)
a[j]++;
return a[i]++;
}
}

