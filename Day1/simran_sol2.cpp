#include <iostream>
using namespace std;

int reverse(int n)
{ 
    int rev = 0, r; 
    while (n > 0) { 
        r = n % 10; 
        rev = rev * 10 + r; 
        n /= 10; 
    } 
    return rev; 
} 
bool isPrime(int n) 
{ 
   
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  
 
bool prime(int n) 
{ 
    if (isPrime(n) == false) 
        return false; 
  
    return isPrime(reverse(n)); 
} 
  
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(prime(n))
            cout<<"Yes"<<endl;
        else
            cout<<"No\n";
    }
	
	return 0;
}
