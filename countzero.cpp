# include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;
    int counter = 0;
    
    for (int i =0; i<a.length(); i++){
        if (a[i] =='0'){
            counter += 1;
        }
        
    }
    cout << counter << endl;
    return 0;
}