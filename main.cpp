#include <iostream>
using namespace std;

string wypisz(int x) {
	
		char tekst;
		tekst = '0';
		
        int silnia = 1;
        int k = 1;
        string s = "";
        while (silnia < x) {
                k = k + 1;
                silnia = silnia * k;
        }

        if (silnia > x) {
                silnia = silnia / k;
                k = k - 1;
                s = "";
        }
        
        while (k > 0) {
                int cyfra = x/silnia;
                s = s + char(cyfra+tekst);
                x = x - cyfra * silnia;
                silnia = silnia / k;
                k = k - 1;
        }
        return s;

}

int main() {
        cout << wypisz(711);
}
