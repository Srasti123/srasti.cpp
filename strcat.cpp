# include <iostream>
# include <string.h>
using namespace std;
int main() {
    char str1[] = "Coding";
    char str2[] = "Ninjas";
    strcat(str1, str2);
    cout<<"The value of the first string is:";
    cout<<str1<<endl;
    cout<<"The value of the second string is:";
    cout<<str2<<endl;
    return 0;
}