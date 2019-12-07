#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], b[n+2], min = 0, max = 0, k = 0;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
        if(a[i]<a[min])
        {
            min = i;
        }
        if(a[i]>a[max])
        {
            max = i;
        }
    }
    if(min<max)
    {
        max += 2;
    }
    else
    {
        min += 1;
        max += 1;
    }
    for(int i = 0; i<n+2; i += 1)
    {
        if(i==min || i==max)
        {
            b[i] = 0;
        }
        else
        {
            b[i] = a[k];
            k += 1;
        }
    }
    for(int i = 0; i<n+2; i += 1)
    {
        cout << b[i] << " ";
    }
}
