# include <iostream>
using namespace std;
int main() {
    int nums[5]= {3,2,1,5,7};
    int idx=-1, target=1;
    for(int i=0;i<sizeof(nums)/4;i++) {
        if (nums[i]==target) { /*access element */
        idx=i;
        break; /*element found, terminate search*/
        }
    }
    if(idx!=-1) {
        cout<<"Target found at index: "<<idx;
    }
    return 0;
}