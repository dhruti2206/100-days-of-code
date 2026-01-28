//pointer arithmetic
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // point to the first element of the array

    cout << "Array elements using pointer arithmetic:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " "; // access elements using pointer arithmetic
    }
    cout << endl;

    return 0;
}
