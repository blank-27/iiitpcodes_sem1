#include <bits/stdc++.h>
using namespace std;
#define N 4

void getCofactor(int a[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {

                temp[i][j++] = a[row][col];

                if (j == n - 1)
                {
                    i++;
                    j = 0;
                }
            }
        }
    }
}

int determinant(int a[N][N], int n)
    int det = 0;

    if (n == 1)
        return a[0][0];

    int temp[N][N];
    int sign = 1;

    for (int c = 0; c < n; c++)
    {
        getCofactor(a, temp, 0, c , n);
        det = det + (sign * a[0][c] * determinant(temp, n - 1));
        sign *= -1;
    }
    return det;
}


void adjoint(int a[N][N], int adj[N][N])
{

    if (N == 1)
    {
        adj[0][0] = 1;
        return;
    }
    int temp[N][N];
    int sign = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            getCofactor(a, temp, i, j, N); 

            sign = ((i + j) % 2 == 0) ? (1) : (-1);

            adj[j][i] = (sign) * (determinant(temp, N - 1));
        }
    }
}

bool inverse(int a[N][N], float inverse[N][N])
{
    int det = determinant(a, N);

    if (det == 0)
    {
        cout << "Singular matrix, Inverse can't be found!!" << endl;
        return false;
    }

    int adj[N][N];
    adjoint(a, adj);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            inverse[i][j] = adj[i][j] / float(det);
        }
    }
    return true;
}

int main()
{
    int a[N][N] = {0};

    cout << "Enter the elements of the N x N Matrix:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }

    int adj[N][N]; 

    float inv[N][N]; 

    cout << "\nThe Inverse is :\n";
    if (inverse(a, inv))
    {
        for (int i = 0; i < N; i++)
        {
            cout << endl;
            for (int j = 0; j < N; j++)
            {
                cout << inv[i][j] << "  ";
            }
        }
    }

    return 0;
}