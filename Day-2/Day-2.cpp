#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    // Hollow Square
    for(int i = 1; i <= n - 2; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || j == n) {
                cout<<"* ";
            } else if(i == 1 || i == n - 2) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    // Inverted Ladder
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n - i) + 1; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // Ladder
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // Numerical Ladder
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    // Inverted Numerical Ladder
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n - i) + 1; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    // Pyramid
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j >= (n + 1) - i) {
                cout<<"* ";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    // Inverted Pyramid
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j < i) {
                cout<<" ";
            } else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    
    
    

    return 0;
}
