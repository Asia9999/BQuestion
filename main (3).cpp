#include <iostream>
using namespace std;
int main ()
{
    int a=0,b=0;
    string s;
    cin>>s;
        cin>>s;

    for (int i=0;i<s.size();i++){
    if (s[i] =='A') a++;
    else 
    b++;
    }
    if(a>b)
    cout<<"Anton"<<"\n";
    else if (b>a) cout<<"Danik"<<"\n";
    else cout<<"Friendship "<<"\n";
    
    return 0;
}