#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
  bool  isPrime(int n)
    {
        if(n<=1)
           return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%2==0)
            {
                return false ;
                break;
            }
        }
        return true;
    }
};

int main()
{
    int n;
    cin>>n;
    solution ob;
    cout<<ob.isPrime(n);
}