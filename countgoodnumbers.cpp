# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int counter =0;
    for (int i = 1; i <=a; i++){
        int b;
        cin >> b;
        if (b ==0){
            if (b % 45 ==0){
                counter += 1;
            }
        }
        else {
            if (18 % b ==0 or b % 45 == 0){
                counter ++;
            }
        }   
    }
    cout << counter << endl;
    return 0;
}