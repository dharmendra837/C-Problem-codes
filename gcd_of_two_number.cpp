#include<bits/stdc++.h> 
using namespace std;
int gcd(int A,int B);

class solution
{   public:
      int gcd(int A,int B)
    {
        if(B==0)
           return A;
        else
            return gcd(B,A%B);
    }

};

int main()
{
    int a,b;
    cin>>a>>b;
    solution ob;
    cout<<ob.gcd(a,b)<<"\n";
    
}