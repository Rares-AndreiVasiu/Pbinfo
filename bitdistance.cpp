//
//#include <iostream>
//using namespace std;
//
//int main() {
//    unsigned long long n, a = 0, b = 0, k = 0;
//    cin >> n;
//    while (n > 0) { // parcurgem toti bitii de la dreapta la stanga
//        k += 1;
//        if ((n ^ 1) == (n - 1)) { // daca ultimul bit e 1
//            if (a == 0) {
//                a = k;
//            }
//            b = k;
//        }
//        n >>= 1;
//    }
//    int dif = b - a + 1;
//    cout << dif;
//}