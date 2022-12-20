#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
bool CorrectDNI(int& x, char& characterDNI) {
	int modulo23 = x % 23;
	bool correct = false;
	char lletra;
	switch (modulo23)
	{
	case 0:
		lletra = 'T';
		break;
	case 1:
		lletra = 'R';
		break;
	case 2:
		lletra = 'W';
		break;

	case 3:
		lletra = 'A';
		break;
	case 4:
		lletra = 'G';
		break;
	case 5:
		lletra = 'M';
		break;
	case 6:
		lletra = 'Y';
		break;
	case 7:
		lletra = 'F';
		break;
	case 8:
		lletra = 'P';
		break;
	case 9:
		lletra = 'D';
		break;
		break;
	case 10:
		lletra = 'X';
		break;
	case 11:
		lletra = 'B';
		break;
	case 12:
		lletra = 'N';
		break;
	case 13:
		lletra = 'J';
		break;
	case 14:
		lletra = 'Z';
		break;
	case 15:
		lletra = 'S';
		break;
	case 16:
		lletra = 'Q';
		break;
	case 17:
		lletra = 'V';
		break;
	case 18:
		lletra = 'H';
		break;
	case 19:
		lletra = 'L';
		break;
	case 20:
		lletra = 'C';
		break;
	case 21:
		lletra = 'K';
		break;
	case 22:
		lletra = 'E';
		break;
	default:
		break;
	}
	if (characterDNI == lletra)
		correct = true;
	return correct;
}


int main() {
	int x;
	char letterDNI;
	
	ifstream myFile("listOfDNI.txt");
	if (myFile.is_open()) {
		ofstream myFile2("CorrectDNI.txt");
		while (myFile >> x >> letterDNI) {
			if (CorrectDNI(x, letterDNI))
				myFile2 << "OK" << endl;
			else
				myFile2 << "ERROR" << endl;
		}
		myFile.close();
		myFile2.close();


	}
	else
		cout << "ERROR";

	return 0;

}
*/

/*int main() {

	int msg, lletraShifted;
	int shift = 5;
	char lletra;

	ifstream myMessage("original_message.txt");
	if (myMessage.is_open()) {
		ofstream myEncrypted("encrypted_message.txt");
		while (myMessage >> lletra) {
			msg = lletra + shift;
			myEncrypted << msg << ' ';
		}
		myMessage.close();
		myEncrypted.close();
	}
	else
		cout << "ERROR" << endl;
	
	ifstream myEncrypted("encrypted_message.txt");

	if (myEncrypted.is_open())
	{
		ofstream myDecrypted("decrypted_message.txt");
		while (myEncrypted >> lletraShifted) {
			msg = lletraShifted - shift;
			myDecrypted << (char)msg;
		}
		myEncrypted.close();
		myDecrypted.close();
	}
	else
		cout << "ERROR";



	return 0;
}
*/

int main() {
	int a;

	ifstream myUsers("users_CSGO.txt");
	if (myUsers.is_open())
	{
		ofstream myHighscores("highscores_CSGO.txt");
		while (myUsers >> a)
		{

		}
	}

}