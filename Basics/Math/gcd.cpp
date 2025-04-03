#include<bits/stdc++.h>
using namespace std;

// Brute-force approach
class bruteSolution {
    public:
        int GCD(int n1,int n2) {
            int largest = 1;
            for(int i=2; i<=min(n1,n2); i++){
                if(n1%i==0 && n2%i==0)
                largest =i;
            }
            return largest;
        }
    };

// Backtracking approach
    class betterSolution {
        public:
            int GCD(int n1,int n2) {
                int largest = 1;
                for(int i=min(n1,n2); i>=1; i--){
                    if(n1%i==0 && n2%i==0)
                    return i;
                }
                return largest;
            }
        };

// Subtraction-based Euclidean approach

        class goodSolution {
            public:
                int GCD(int n1,int n2) {
                    while(n1!=0 && n2!=0){
                        if (n1>n2)
                        n1=n1-n2;
                        else
                        n2= n2-n1;
                    }
                    if (n2==0) return n1;
                    return n2;
                }
            };    

// Optimal Euclidean approach (modulo operation)

            class optimalSolution {
                public:
                    int GCD(int n1,int n2) {
                        while(n1!=0 && n2!=0){
                            if (n1>n2)
                            n1=n1%n2;
                            else
                            n2= n2%n1;
                        }
                        if (n2==0) return n1;
                        return n2;
                    }
                };    
                int main() {
                    int n1, n2;
                    cout << "Enter two numbers: ";
                    cin >> n1 >> n2;
                
                    bruteSolution brute;
                    betterSolution better;
                    goodSolution good;
                    optimalSolution optimal;
                
                    cout << "\nGCD using Brute-Force Approach: " << brute.GCD(n1, n2) << endl;
                    cout << "GCD using Backtracking Approach: " << better.GCD(n1, n2) << endl;
                    cout << "GCD using Subtraction-Based Approach: " << good.GCD(n1, n2) << endl;
                    cout << "GCD using Optimal Euclidean Approach: " << optimal.GCD(n1, n2) << endl;
                
                    return 0;
                }
