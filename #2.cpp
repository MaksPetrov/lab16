#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], b[n], k = 0;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    for(int i = 0; i<n; i += 1)
    {
        int c = 1;
        for(int j = 0; j<i; j += 1)
        {
            if(a[j]==a[i])
            {
                c += 1;
            }
        }
        for(int j = i+1; j<n; j += 1)
        {
            if(a[j]==a[i])
            {
                c += 1;
            }
        }
        if(c!=2)
        {
            b[k] = a[i];
            k += 1;
        }
    }
    cout << endl << k << endl;
    for(int i = 0; i<k; i += 1)
    {
        cout << b[i] << " ";
    }
}
