#include <iostream>
using namespace std;
void CloseFixPA(int* x, int* y, int* f);
void CloseFixNA(int* x, int* y, int* f);
void CloseFixPB(int* x, int* y, int* f);
void CloseFixNB(int* x, int* y, int* f);

int main() {
    int k, a = 0, b = 0, time = 0;
    cin >> k >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    if (b - a <= k / 2) {
        time += b - a;
        cout << time;
    }
    else {
        if (a >= 0) {
            CloseFixPA(&a, &k, &time);
        }
        else {
            CloseFixNA(&a, &k, &time);
        }
        if (b >= 0) {
            CloseFixPB(&b, &k, &time);
        }
        else {
            CloseFixNB(&b, &k, &time);
        }
        time += (b - a) / k;
        cout << time;
    }
}

void CloseFixPA(int* x, int* y, int* f) {
    if (*x % *y < *y / 2) {
        *f += *x % *y;
        *x = *x - (*x % *y);
    }

    else {
        *f += *y - (*x % *y);
        *x = *x + (*y - (*x % *y));
    }

}
void CloseFixNA(int* x, int* y, int* f) {
    if (((*x % *y * -1) - 1) >= *y / 2) {
        *f += *y - ((*x % (*y * -1)) * -1);
        *x = *x - (*y - ((*x % (*y * -1)) * -1));
    }
    else {
        *f += (*x % (*y * -1)) * -1;
        *x = *x + (*x % (*y * -1)) * -1;
    }

}
void CloseFixPB(int* x, int* y, int* f) {
    if (*x % *y <= *y / 2) {
        *f += *x % *y;
        *x = *x - (*x % *y);
    }

    else {
        *f += *y - (*x % *y);
        *x = *x + (*y - (*x % *y));
    }

}
void CloseFixNB(int* x, int* y, int* f) {
    if (((*x % *y * -1) - 1) + 1 >= *y / 2) {
        if (*x * -1 < *y) {
            *f += *y - ((*x % (*y * -1)) * -1);
            *x = *x - (*y - ((*x % (*y * -1)) * -1));
        }
        else {
            *f += ((*x % (*y * -1)) * -1);
            *x = *x - ((*x % (*y * -1)) * -1);
        }

    }
    else {
        *f += (*x % (*y * -1)) * -1;
        *x = *x + (*x % (*y * -1)) * -1;
    }

}
//https://quera.ir/college/2572/chapter/31764/lesson/104169/#page=1