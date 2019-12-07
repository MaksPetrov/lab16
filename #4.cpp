#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], c = 0;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
        if(a[i]<0)
        {
            c += 1;
        }
    }
    int b[n+c], k = 0;
    for(int i = 0; i<n; i += 1)
    {
        b[k] = a[i];
        if(a[i]<0)
        {
            k += 1;
            b[k] = 0;
        }
        k += 1;
    }
    for(int i = 0; i<n+c; i += 1)
    {
        cout << b[i] << " ";
    }
}
