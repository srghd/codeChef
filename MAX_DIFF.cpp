#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int N,S;
      
        cin>>N;
        cin>>S;
      
        int diff=0;
        int x=S-N;
      
        if (S<=N)
          diff=S;
        else
          diff=abs(N-x);
       
        cout<<diff<<endl;
    }
    return 0;
}
