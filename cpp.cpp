#include <iostream>

using namespace std;

/*
int main(){
    static int x = 1;
    cout << x << ", ";
    x++;
    if (x <= 5){main();}
}
*/

/*
int main(){
    static int A = 5; // вводите сюда
    static int B = 1; // вводите сюда
    if (B < A){
        cout << B << ", ";
        B++;
        main();
    } else if (A < B){
        cout << A << ", ";
        A++;
        main();
    }
}
*/

/*
int main(){
    static int N = 32;
    if (N > 2){
        if (N % 2 == 1){
            cout << "NO";
            return 0;
        } else {
            N /= 2;
            main();
        }
    } else {
        if(!(N % 2)){
            cout << "YES";
            return 0;
        } else {
            cout << "NO";
            return 0;
        }
    }
}
*/