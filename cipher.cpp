#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << R"(
                     /$$                                               
                    | $$                                               
  /$$$$$$$ /$$   /$$| $$$$$$$   /$$$$$$$        /$$  /$$$$$$   /$$$$$$ 
 /$$_____/| $$  | $$| $$__  $$ /$$_____//$$$$$$|__/ /$$__  $$ /$$__  $$
| $$      | $$  | $$| $$  \ $$|  $$$$$$|______/ /$$| $$  \ $$| $$$$$$$$
| $$      | $$  | $$| $$  | $$ \____  $$       | $$| $$  | $$| $$_____/
|  $$$$$$$|  $$$$$$$| $$$$$$$/ /$$$$$$$/       | $$|  $$$$$$/|  $$$$$$$
 \_______/ \____  $$|_______/ |_______/        | $$ \______/  \_______/
           /$$  | $$                      /$$  | $$                    
          |  $$$$$$/                     |  $$$$$$/                    
           \______/                       \______/                     
)" << endl;

    int shift = 3;
    string encr;
    char decry;
    char encr2;
    cout << "enter a string" << endl;
    getline(cin , encr);

    for (int i = 0 ; i < encr.size() ; i++){
        encr2 = encr[i];
        if(encr2  >= 'A' && encr2 <='Z'){
            encr[i] = (encr2 - 'A' + shift) %26 +'A';
        }
        else if(encr2 >= 'a' && encr2 <='z'){
            encr[i] = (encr2 -'a' + shift) %26 +'a';
        }
    }
    cout << encr << endl;
  
    char choice;
    cout << " Do you want to decrypt?(Y/N) ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y'){
        for (int j = 0 ; j < encr.size(); j++){
            decry = encr[j];

            if(decry >= 'A' && decry <= 'Z'){
                encr[j] = (decry -'A' -shift +26) %26 +'A';
            }
            else if(decry >= 'a' && decry<= 'z'){
                encr[j] = (decry -'a' -shift +26) %26 +'a';
            }
        }
    }
    else{
        return 0;
    }
    cout << encr;
    
}