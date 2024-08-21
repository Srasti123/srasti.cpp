// Taking input array from users and printing the array elements:-
# include <iostream>
using namespace std;
int main() {
    //Size of the array to be made
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    //Declaring an array of size n;
    int values[n];
    cout<<"Enter"<<n<<"integers:"<<endl;
    //Take array elements as input from the user
    for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    cout<<"The intergers are:";
    //Print array elements
    for(int i=0;i<n;i++)
    {
        cout<<values[i]<<" ";
    }
    return 0;
}