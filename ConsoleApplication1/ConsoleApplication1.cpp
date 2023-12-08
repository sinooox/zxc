#include <iostream>
using namespace std;

int factorial()
{
    int n;
    long long int factorial = 1;

    cout << "enter number: ";
    cin >> n;

    for (int i=1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;
    return factorial;
}

int numbers()
{
    int n = 1;
    int even = 0;
    int odd = 0;

    while (n != 0)
    {
        cout << "enter number: ";
        cin >> n;
        
        if (n % 2 == 0)
        {
            even += n;
        }
        else
        {
            odd += n;
        }
    }

    cout << "sum of even numbers: " << even << endl;
    cout << "sum of odd numbers: " << odd << endl;
    return even, odd;
}

double kmToMiles(double km, double k = 0.621371)
{
    double miles = km * k;
    cout << km << " kilometers is " << miles << " miles" << endl;
    return miles;
}

int main()
{
    factorial();
    numbers();
    kmToMiles(65.0);
}
