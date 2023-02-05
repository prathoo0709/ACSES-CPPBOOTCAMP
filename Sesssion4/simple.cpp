#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two integers" << endl;
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            cout << "division is:" << a / b << endl;
        }
        else
        {
           throw b; 
        }
    }
    
    catch(int b)
    {
        cout<<"dividing by zero"<<endl;
    }
//cout<<'l'<<endl;
    return 0;
}
