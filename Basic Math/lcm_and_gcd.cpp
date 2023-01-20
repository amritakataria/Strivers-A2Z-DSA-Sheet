#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a , long long b)
{
  int res = min(a,b);
  if(b==0)
  {
    return a;
  }

  return gcd(b,a%b);
}


vector <long long> lcmAndGcd(long long  a , long long b)
{
    vector <long long> v;
    long long z;

    z=(a*b)/gcd(a,b);
    v.push_back(z);
    v.push_back(gcd(a,b));
    return v;

}

int main()
{


    long long a, b;
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

vector <long long> ans = lcmAndGcd(a,b);
cout<<"LCM: "<<ans[0]<<" " <<"HCF: "<<ans[1];

return 0;
}