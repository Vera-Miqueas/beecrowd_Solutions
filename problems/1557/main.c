#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int N;
    
    while (cin >> N && N != 0) {

        int max_val = 1 << (2 * N - 2); 
        
        int T = to_string(max_val).length(); 

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                
                int valor = 1 << (i + j);
                
                if (j > 0) {
                    cout << " ";
                }
                
                cout << setw(T) << valor;
            }
            cout << endl; 
        }
        cout << endl; 
    }

    return 0;
}