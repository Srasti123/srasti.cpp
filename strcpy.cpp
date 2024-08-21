# include <iostream>
# include <string.h>
using namespace std;
int main()
{
    char str1[50] = "Coding Ninjas";
    char str2[50];
    strcpy (str2,str1);
    cout<<"The value of the first string is:";
    cout<<str1<<endl;
    cout<<"The value of the second string is:";
    cout<<str2<<endl;
    return 0;
}