// c++ program to demonstrate the working of strlen(), size() and length().
# include <iostream>
# include <string.h>
using namespace std;
int main() {
    char str1[] = "codingninjas";
    string str2 = "string functions are very useful";
    cout<<"The length of the first string using strlen():";
    cout<< strlen(str1) <<endl;
    cout<<"The length of the second string using size():";
    cout<<str2.size()<<endl;
    cout<<"The lenght of a second string using length():";
    cout<<str2.length()<<endl;
    return 0;
}
