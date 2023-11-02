#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int minNum = INT_MAX;
    vector<int> notQnumbers;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num != 1)
        {
            notQnumbers.push_back(num);
            minNum = min(minNum, num);
        }
        
    }

    int q = minNum;

    int p = q;
    while (true)
    {
        bool divisibleAll = true;
        for (int i = 0; i < n; i++)
        {
            if (q != minNum && q % minNum == 0)
            {
                continue;
            }
            if (p % q != minNum)
            {
                divisibleAll = false;
                break;
            }
        }
        if (divisibleAll && isPrime(p))
        {
            break;
        }
        p++;
    }
    cout << p << endl;

    return 0;
}