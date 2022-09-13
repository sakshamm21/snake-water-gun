// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int game(ll i)
{
    ll x;
    x = 1 + rand() % 3;
    if (i == x)
        return 0;
    else if (i == 1)
    {
        if (x == 2)
            return 1;
        else
            return -1;
    }
    else if (i == 2)
    {
        if (x == 3)
            return 1;
        else
            return -1;
    }
    else if (i == 3)
    {
        if (x == 1)
            return 1;
        else
            return -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));
    char st;
    ll i;
    cout << "Enter your choice, s/w/g: " << endl;
    cin >> st;
    if (st == 's')
        i = 1;

    if (st == 'w')
        i = 2;

    if (st == 'g')
        i = 3;

    int z = game(i);

    if (z == 1)
        cout << "You Win!" << endl;
    if (z == -1)
        cout << "Better Luck Next Time" << endl;
    if (z == 0)
        cout << "Oof its a tie" << endl;
    return 0;
}