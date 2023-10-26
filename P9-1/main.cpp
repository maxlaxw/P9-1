//
//  main.cpp
//  P9-1
//
//  Created by Max Williams on 10/26/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    srand(time(0));
    int num[10];
    // creates the array of random 4 digit numbers
    for (int i = 0; i<10; i++){
        num[i] = 1000 + (rand() % 9000);
    }
    // prints the array
    cout<<"The random integers: ";
    for (int i = 0; i<10; i++){
        cout<<num[i]<<" ";
    }
}
