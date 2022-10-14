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
    char ChuSo;
	printf("\Nhap vao mot chu trong bang ALPHABET<a-z, A-Z");
	cout << "Chu So: ";
	cin >> ChuSo;
	
	   if((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z')){
    	cout << ChuSo << "la chu so";
	}else{
		cout << ChuSo <<"khong phai la chu so";  
	}
 

 
    return 0;
}
