#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int counter=1;
        for(int i=1; i <N-i;i++)
            counter++;
        cout<<counter<<endl;
    }
    return 0;
}
