// Basically if we want to print 2^9 in a lame way, we can do it by multiplying 2 9 times.
// But we can do it in a better way by using the pow() function in the cmath library.
// Let's see the lame way first.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 9;
    int ans = 1;
    for(int i=0;i<n;i++){
        ans *= 2;
    }
    cout<<ans<<endl;
    return 0;
}
// Output: 512
// Now let's see the better way.
#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n = 9;
    int ans = pow(2,n);
    cout<<ans<<endl;
    return 0;
}

// 28/02/25