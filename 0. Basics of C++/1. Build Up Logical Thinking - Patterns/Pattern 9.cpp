#include <bits/stdc++.h>
using namespace std;

void erect_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < N - i - 1; j++) {
            cout << "  ";
        }

        // For printing the stars in each row
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "* ";
        }

        cout << "\n";
    }
}

void inverted_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
            // For printing the spaces before stars in each row
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        for (int j = 0; j < 2 * (N - i) - 1; j++) {
        cout << "* ";
        }

        cout << "\n";
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;
    erect_pyramid(N);
    inverted_pyramid(N);

    return 0;
}

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *