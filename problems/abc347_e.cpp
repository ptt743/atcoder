#include <iostream>
#include <bit>

int main() {
    using namespace std;
    unsigned a, b;
    unsigned long C;
    cin >> a >> b >> C;
    unsigned c = popcount(C);

    if((a + b + c) % 2 != 0 || a + b + c > 120 || a > b + c || b > c + a || c > a + b){
        cout << "-1" << endl;
        return 0;
    }

    // n?? = the number of k such that the k-th digit of X and Y are ??
    unsigned n00{60 - (a + b + c) / 2}, n01{(-a + b + c) / 2}, n10{(a - b + c) / 2}, n11{(a + b - c) / 2};

    unsigned long X{}, Y{};
    cout << n10 << " "<<n01<<" "<<n11<< endl;
    for(unsigned B = 60; B--;){ // Scan from the higher digit
        // Lift one bit each
        X *= 2;
        Y *= 2;

        if(1 & (C >> B)){ // If B-th bit of C is 1
            if(n10){ // if (1, 0) is in stock
                ++X; // set the B-th bit of X to 1, and of Y to 0
                --n10; // consume the stock
            }else{ // otherwise
                ++Y; // set that of Y to 1
                --n01; // consume the stock
            }
        }else{ // If B-th bit of C is 0
            if(n00){ // if (0, 0) is in stock
                --n00; // set both of them to 0, and consume the stock
            }else{ // otherwise
                ++X; // set both of them to 1,
                ++Y;
                --n11; // and consume the stock
            }
        }
    }

    cout << X << " " << Y << endl;
    return 0;
}

