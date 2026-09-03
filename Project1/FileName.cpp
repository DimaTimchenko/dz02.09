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
	NoteBook();

	NoteBook(string cp, string m, string r, string g, string a, string ss, double price) {
		cpu = cp;
		motherboard = m;
		ram = r;
		gpu = g;
		audiocard = a;
		ssd = ss;
		notebookPrice = price;
	}
	~NoteBook() {
		cout << "destructorPC" << endl;
	}

	void InitPC(string cp, string m, string r, string g, string a, string ss, double price);
	void PrintPC();
	
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
	Point();
	Point(int q, int w, int e);
	~Point();
	int GetX();
	void SetX(int newx);
	int GetY();
	void SetY(int newy);
	int GetZ();
	void SetZ(int newz);
	void InitXYZ(int newx, int newy, int newz);
	void PrintXYZ();
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
	Student();
	Student(string f, string d, string n, string t, string name, string tp, string ng);
	~Student();
	string GetFIO();
	void SetFIO(string f);
	string GetDateOfBirth();
	void SetDateOfBirth(string date);
	string GetPhone();
	void SetPhone(string number);
	string GetTownCountry();
	void SetTownCountry(string townandcountry);
	void SetNameOfPlace(string placename);
	string GetNameOfPlace();
	string GetTownCountryOfPlace();
	void SetTownCountryOfPlace(string tcop);
	string GetGroupNumber();
	void SetPhoneNumber(string gn);
	void Print();
	void Init(string f, string d, string n, string t, string name, string tp, string ng);
};

NoteBook::NoteBook()
{
	cpu = "0";
	motherboard = "0";
	ram = "0";
	gpu = "0";
	audiocard = "0";
	ssd = "0";
	notebookPrice = 0;
}

void NoteBook::PrintPC()
{
}




int main() {
	Student chelick("Timchenko Dmytro Oleksiovich", "12.11.2007", "083483919", "odessa/ukraine", "itStep", "Odessa/Ukraine", "KH-251");
	Point Random(6, 2, 3);
	NoteBook PC("kgsgd", "gsfgs", "ksgkskg;s", "ksgksgsd", "fdskfsdkds", "sdslfm", 0);
	chelick.Print();
	Random.PrintXYZ();
	PC.PrintPC();
}

Student::Student()
{
		FIO = "0";
		DateOfBirth = "0";
		PhoneNumber = "0";
		TownCountry = "0";
		NameOfPlace = "0";
		TownCountryOfPlace = "0";
	GroupNumber = "0";
}

Student::Student(string f, string d, string n, string t, string name, string tp, string ng)
{
	FIO = f;
	DateOfBirth = d;
	PhoneNumber = n;
	TownCountry = t;
	NameOfPlace = name;
	TownCountryOfPlace = tp;
	GroupNumber = ng;
}

Student::~Student()
{
	cout << "destructor" << endl;
}

string Student::GetFIO()
{
	string f = FIO;
	return f;
}

void Student::SetFIO(string f)
{
	FIO = f;
}

string Student::GetDateOfBirth()
{
	string	date = DateOfBirth;
	return date;
}

void Student::SetDateOfBirth(string date)
{
	DateOfBirth = date;
}

string Student::GetPhone()
{
	string number = PhoneNumber;
	return number;
}

void Student::SetPhone(string number)
{
	PhoneNumber = number;
}

string Student::GetTownCountry()
{
	string townandcountry = TownCountry;
	return townandcountry;
}

void Student::SetTownCountry(string townandcountry)
{
	TownCountry = townandcountry;
}

void Student::SetNameOfPlace(string placename)
{
	NameOfPlace = placename;
}

string Student::GetNameOfPlace()
{
	string placename = NameOfPlace;
	return placename;
}

string Student::GetTownCountryOfPlace()
{
	string tcop = TownCountryOfPlace;
	return tcop;
}

void Student::SetTownCountryOfPlace(string tcop)
{
	TownCountryOfPlace = tcop;
}

string Student::GetGroupNumber()
{
	string gn = GroupNumber;
	return gn;
}

void Student::SetPhoneNumber(string gn)
{
	GroupNumber = gn;
}

void Student::Print()
{
	cout << "FIO=" << FIO << endl << "DateOfBirth=" << DateOfBirth << endl << "PhoneNumber=" << PhoneNumber << endl << "Town/Country=" << TownCountry << endl
		<< "NameOfPlace=" << NameOfPlace << endl << "Town/Country of place = " << TownCountryOfPlace << endl << "GroupNumber=" << GroupNumber << endl;
}

void Student::Init(string f, string d, string n, string t, string name, string tp, string ng)
{
	FIO = f;
	DateOfBirth = d;
	PhoneNumber = n;
	TownCountry = t;
	NameOfPlace = name;
	TownCountryOfPlace = tp;
	GroupNumber = ng;
}

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(int q, int w, int e)
{
	x = q, y = w, z = e;
}

Point::~Point()
{
	cout << "destructor" << endl;
}

int Point::GetX()
{
	int newx = x;
	return newx;
}

void Point::SetX(int newx)
{
	x = newx;
}

int Point::GetY()
{
	int 	newy = x;
	return newy;
}

void Point::SetY(int newy)
{
	y = newy;
}

int Point::GetZ()
{
	int newz = z;
	return newz;
}

void Point::SetZ(int newz)
{
	z = newz;
}

void Point::InitXYZ(int newx, int newy, int newz)
{
	x = newx;
	y = newy;
	z = newz;
}

void Point::PrintXYZ()
{
	cout << "X=" << x << endl << "Y=" << y << endl << "Z=" << z << endl;
}
