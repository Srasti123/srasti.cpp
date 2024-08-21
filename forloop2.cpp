// Check given number is even or odd
# include <iostream>
using namespace std;
int main() {
    int num;

    // Taking input from the user
    cout<<"Enter an integer: ";
    cin>>num;

    for(int i=0; i<1; i++ ) {
        if (num%2==0) {
            cout<< num <<"is even."<< endl;
        } else {
            cout<< num <<"is odd."<<endl;
        }
    }
    return 0;
}
    