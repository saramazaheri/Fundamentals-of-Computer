#include <iostream>

using namespace std;

int func(int x){
    if(x==5){
        return 100;
    }else{
    return 1+ func(x-1);
    }
}

int main()
{
    cout <<func(10) << endl;
}
