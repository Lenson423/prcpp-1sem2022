#include <iostream>
using namespace std;
int main() {
    unsigned int age;
    cin>>age;
    if (age % 4 != 0 or (age % 100 == 0 and age % 400 != 0)){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
