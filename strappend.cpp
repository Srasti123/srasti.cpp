# include <iostream>
using namespace std;
int main() {
    string string1,string2;
    cout<<"Enter string1-";
    getline(cin,string1);
    cout<<"Enter string2-";
    getline(cin,string2);
    // Call append function
    string1.append(string2);
    cout<<"String after append function:"<<string1;
    return 0;
}