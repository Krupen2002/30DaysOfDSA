#include <iostream>
using namespace std;
 
void sortBinaryArray(int a[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < 1) {
            j++;
            swap(a[i], a[j]);
        }
    }
}
 
int main()
{
    int a[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    sortBinaryArray(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
 
    return 0;
}