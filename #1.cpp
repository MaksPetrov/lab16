#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], b[n], k = 1;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for(int i = 1; i<n; i += 1)
    {
        if(a[i]!=a[i-1])
        {
            b[k] = a[i];
            k += 1;
        }
    }
    for(int i = 0; i<k; i += 1)
    {
        cout << b[i] << " ";
    }
}
