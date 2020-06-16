#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout << hex << showbase << nouppercase<<left;
        cout << (long long)A << endl;
        
        //setprecision for decimal values.
		//setw(15) for 15 characters wide.
		//right for right justified.
        cout << setw(15) << showpos << setfill('_') << setprecision(2)<<fixed<<right;
        cout << B << endl;
        
        cout << scientific << setw(15) << setprecision(9) << uppercase<<noshowpos;
        cout << C << endl;

	}
	return 0;

}
