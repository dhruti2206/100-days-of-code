//sum using pointers
#include<iostream>
using namespace std;
int main()
{
    int a, b, sum;
    int *p1, *p2, *p3;

    cout << "Enter two integers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;
    p3 = &sum;

    *p3 = *p1 + *p2;

    cout << "Sum = " << *p3 << endl;

    return 0;
}
