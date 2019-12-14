//
//  main.cpp
//  loops
//
//  Created by Sarahi Cardenas Trejo on 11/17/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
using namespace std;

void multiples(int n){
    for (int i = 1; i <=10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    multiples(n);
    
    
    return 0;
}

