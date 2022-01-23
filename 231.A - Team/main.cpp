#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){

    int n; 
    int a,b,c;
    int problems = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if (a+b+c >= 2) problems++;
    }

    cout << problems;

    return 0;
}