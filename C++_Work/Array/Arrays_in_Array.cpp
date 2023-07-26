/*
Example -->
2 2 -> n, q
3 1 5 4 -> k, k[1], k[2], k[3] 
5 1 2 8 9 3 -> k, k[1], k[2], k[3], k[4], k[5]
0 1 -> q1 ==> i, j
1 3 -> q2 ==> i, j

Output -->
5 -> located at a[0], k[1]
9 -> located at a[1], k[3]
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int i, j, n, k, q;
    cin >> n;
    int **a = new int*[n];
    cin >> q;
    
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int g = 0; g < q; g++)
    {
        cin >> i;
        cin >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}