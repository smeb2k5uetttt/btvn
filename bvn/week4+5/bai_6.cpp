#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int a[100][100];
    int h1 = 0, h2 = x - 1, c1 = 0, c2 = y - 1;
    int dem = 1;
    while(h1 <= h2 && c1 <= c2){
        for(int i = c1; i <= c2; i++){
            a[h1][i] = dem; ++dem;
        }
        ++h1;
        for(int i = h1; i <= h2; i++){
            a[i][c2] = dem; ++dem;
        }
        --c2;
        for(int i = c2; i >= c1; i--){
            a[h2][i] = dem; ++dem;
        }
        --h2;
        for(int i = h2; i >= h1; i--){
            a[i][c1] = dem; ++dem;
        }
        ++c1;
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
