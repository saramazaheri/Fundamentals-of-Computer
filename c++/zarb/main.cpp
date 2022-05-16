#include <iostream>

using namespace std;
int zarb (int x, int y){
    if (x==1){
        return y;
    }else{
        return y+ zarb(x-1, y);
        }
    }
int main()
{
    cout <<zarb(23, 15) << endl;
    return 0;
}
