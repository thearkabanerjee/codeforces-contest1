# include <iostream>
using namespace std;


int main(){
    int a, b;
    cin >> a>> b;
    
    for (int i = 1; i  <=a; i++){
        for (int j =1; j <= b; j++){
            // cout << '^';
            if (i == a or i==1 or j==1 or j == b){
                cout << '^';
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}