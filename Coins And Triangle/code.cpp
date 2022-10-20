#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        int r = 1;
        int h = 0;
        while(count <= n){
            count += r;
            r += 1;
            h++;
        }
        if(n < count){
            cout<<h-1<<endl;
        }
        else{
            cout<<h<<endl;
        }
    }

    return 0;
}
