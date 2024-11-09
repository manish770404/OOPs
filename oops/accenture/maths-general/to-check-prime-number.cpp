#include <iostream>
using namespace std;

bool isprime(int num)
{
    if (num == 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }

    if (num % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= num; i = i + 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "enter the number " << endl;
    int num;
    cin >> num;

    if (isprime(num))
    {
        cout << num << "is prime number" << endl;
    }
    else
    {
        cout << num << "is not prime number" << endl;
    }
    return 0;
}