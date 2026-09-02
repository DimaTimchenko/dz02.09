#include <iostream>
using namespace std;
class NoteBook {
private:
	string cpu;
	string motherboard;
	string ram;
	string gpu;
	string audiocard;
	string ssd;
	double notebookPrice;
public:
	void InitPC(string cp,string m,string r,string g,string a,string ss,double price) {
		cpu = cp;
		motherboard = m;
		ram = r;
		gpu = g;
		audiocard = a;
		ssd = ss;
		notebookPrice = price;
	}
	void PrintPC(){
		cout << "cpu=" << cpu << endl << "motherboard=" << motherboard << endl << "ram=" << ram << endl << "gpu=" << gpu << endl
			<< "audiocard=" << audiocard << endl << "ssd = " << ssd << endl <<"notebook price = " << notebookPrice << endl;
	}
	string GetCpu() {
		string f = cpu;
		return f;
	}
	void SetCpu(string f) {
		cpu = f;
	}
	string GetMotherboard() {
		string f = motherboard;
		return f;
	}
	void SetMotherboard(string f) {
		motherboard = f;
	}
	string GetRam() {
		string f = ram;
		return f;
	}
	void SetRam(string f) {
		ram = f;
	}
	string GetGpu() {
		string f = gpu;
		return f;
	}
	void SetGpu(string f) {
		gpu = f;
	}
	string GetAudiocard() {
		string f = audiocard;
		return f;
	}
	void SetAudiocard(string f) {
		audiocard = f;
	}
	string GetSsd() {
		string f = ssd;
		return f;
	}
	void SetSsd(string f) {
		ssd = f;
	}
	double GetNotebookPrice() {
		double f = notebookPrice;
		return f;
	}
	void SetNotebookPrice(double f) {
		notebookPrice = f;
	}
};
class Point {
private:
	int x=0;
	int y=0;
	int z=0;
public:
	int GetX() {
		int newx = x;
		return newx;
	}
	void SetX(int newx) {
		x = newx;
	}
	int GetY() {
	int 	newy = x;
		return newy;
	}
	void SetY(int newy) {
		y = newy;
	}
	int GetZ() {
		int newz = z;
		return newz;
	}
	void SetZ(int newz) {
		z = newz;
	}
	void InitXYZ(int newx,int newy, int newz){
		x = newx;
		y = newy;
		z = newz;
	}
	void PrintXYZ() {
		cout << "X=" << x << endl << "Y=" << y << endl << "Z=" << z << endl;
	}

};
class Student {
private:
	string FIO;
	string DateOfBirth;
	string PhoneNumber;
	string TownCountry;
	string NameOfPlace;
	string TownCountryOfPlace;
 string GroupNumber;
public:
	string GetFIO() {
		string f = FIO;
		return f;
	}
	void SetFIO(string f) {
			FIO = f;
		}
	string GetDateOfBirth() {
	string	date = DateOfBirth;
		return date;
		}
	void SetDateOfBirth(string date) {
		DateOfBirth = date;
		}
	string GetPhone() {
	string number=PhoneNumber;
	return number;
		}
	void SetPhone(string number) {
		PhoneNumber = number;
		}
	string GetTownCountry() {
		string townandcountry = TownCountry;
		return townandcountry;
	}
	void SetTownCountry(string townandcountry) {
		TownCountry = townandcountry;
	}
	void SetNameOfPlace(string placename) {
			NameOfPlace = placename;
	}
	string GetNameOfPlace() {
		string placename=NameOfPlace;
		return placename;
	}
	string GetTownCountryOfPlace() {
	 string tcop = TownCountryOfPlace;
	 return tcop;
	}
	void SetTownCountryOfPlace(string tcop) {
		TownCountryOfPlace=tcop;
	}
	string GetGroupNumber() {
		string gn = GroupNumber;
		return gn;
	}
	void SetPhoneNumber(string gn) {
		GroupNumber = gn;
	}

	void Print() {
		cout << "FIO=" << FIO << endl << "DateOfBirth=" << DateOfBirth << endl << "PhoneNumber=" << PhoneNumber << endl << "Town/Country=" << TownCountry << endl
			<< "NameOfPlace=" << NameOfPlace << endl << "Town/Country of place = " << TownCountryOfPlace << endl << "GroupNumber=" << GroupNumber << endl;
	}
	void Init(string f,string d,string n,string t,string name,string tp,string ng){
		FIO = f;
		DateOfBirth = d;
		PhoneNumber = n;
		TownCountry = t;
		NameOfPlace = name;
		TownCountryOfPlace = tp;
		GroupNumber = ng;
	}
};
int main() {
	Student chelick;
	chelick.Init("Timchenko Dmytro Oleksiovich", "12.11.2007", "083483919", "odessa/ukraine", "itStep", "Odessa/Ukraine", "KH-251");
	chelick.Print();
	Point random;
	random.InitXYZ(1, 2, 3);
	random.PrintXYZ();
	NoteBook MyPc;
	MyPc.InitPC()

}	