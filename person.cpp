#include<iostream>
#include<string>
using namespace std;

class Person {
    char name[50];
    int day;
    int month;
    int year;
    string gender;
    char address[100];
public:
    void Nhap() {
        cout << "nhap ten: ";
        //cin.ignore();
        cin.getline(name, 50);

        cout << "nhap ngay thang nam sinh";
        cin >> day >> month >> year;
        cout << "nhap gioi tinh:";
        cin.ignore();
        getline(cin, gender);
        
        cout << "nhap dia chi :"; 
        cin.ignore();
        cin.getline(address, 100);
    }
    void Xuat() {
        cout << "ten: " << name << endl;
        cout << "ngay thang nam sinh: " << day << "/" << month << "/" << year << endl;
        cout << "gioi tinh:" << gender << endl;
        cout << "dia chi: " << address << endl;

    }

     void strcpy(char name[], char ten[]) 
{
	int n = 0;
	do
	{
		ten[n] = name[n];
		n++;
	} while (name[n] != '\0');
}

void set_name(char ten[50]){
        this->name=ten;
    }
    char get_name(){
        return name;
    }






};
int main() {
    Person a;
    a.Nhap();
    a.Xuat();
    return 0;
}
