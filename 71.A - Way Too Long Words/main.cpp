#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){

    int n; 
    string w;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> w;
        if(w.length() <= 10){
            cout << w << endl;
            continue;
        }
        cout << w[0] << w.length() - 2 << w[w.length() - 1] << endl;
    }

    return 0;
}