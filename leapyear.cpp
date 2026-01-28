# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    
    if(a % 100 ==0 and a% 400== 0){
        cout << "Yes"<< endl;
    }
    else if(a %100 != 0 and a % 4 ==0){
        cout << "Yes"<< endl;
    }
    else {
        cout << "No"<< endl;
    }
    return 0;
}