#include<iostream>
using namespace std;

int main() 
{
    int n,next,i = 0;
    int f=0,s=1;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    while (i < n) {
        cout << f << " ";
        next = f + s;
        f = s;
        s = next;
        i++;
    }

    return 0;
}
