#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    int w;
    cin >> w;
    
    int a = 2;
    bool posible = false;    

    if(w == 2){
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < w / 2; i += 2){
        if((w - (a + i)) % 2 == 0){
            posible = true;
        }
    }

    string ans = posible ? "YES" : "NO";
    cout << ans;
    return 0;
}