#include <iostream>
using namespace std; 
 
int main()
{ 
    char kyTu;
    printf("\nNhap vao mot chu trong bang ALPHABET<a-z, A-Z>"); 
    cout << "Ky Tu: ";
    cin >> kyTu;
    
    if((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z')) {
        cout << kyTu << " la ky tu chu thuong";
    } else {
        cout << kyTu << " khong phai la ky tu chu thuong";
    }
 
    return 0;
}
