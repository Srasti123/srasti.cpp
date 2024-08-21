//Calculating the sum and average of all the elements of an array:-
# include <iostream>
using namespace std;
int main() {
    //Declaring an array
    int nums[10]= {5,6,7,8,4,1,3,2,4,9};
    double sum= 0;
    double avg= 0;
    //Printing array elements
    for(int i=0;i<10;i++)
    {
        cout<<nums[i]<<" ";
    }    
    //Adding all the elements of the array to calculate the sum
    for(int i=0;i<10;i++)
    {
        sum+=nums[i];
    }
    //Calculating the aveerage 
    avg= sum/10;
    cout<<endl<<"Sum="<<sum;
    cout<<endl<<"Average="<<avg;
    return 0;
}