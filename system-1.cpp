#include<iostream>

using namespace std;
int P, R, I = 1, E = 2, T;
int mode = 0;
int angleMax = 180, angleMin = 0;
int Pmax = 60, Pmin = 15;
int tH, tT;

int main() {
    while (true)
    {
        cout << "-------------------------------------------input------------------------------------------------------"<<endl;
            // set mode
        do {
            cout << "mode: \n   0: off\n    1: 1:2\n    2: 1:3\n    3: 1:4\n";
            cin >> mode;
        } while (mode > 3 || mode < 0);
        
        

        // ap suat
        do {
            cout << "nhap 15 <= P <= 60: \n";
            cin >> P;
            if (P==15)
            {
                /* code */
                P=16;
            }
        } while(P<15 || P>60);
        
        

        // nhip tho
        do{
            cout << "nhap 12 <= R <= 40\n";
            cin >> R;
        } while(R<12||R>40);
        

        if(mode == 0) {
            break;
        } else if (mode == 1)
        {
            I = 1;
            E = 2;
        } else if(mode==2) {
            I = 1;
            E = 3;
        } else if(mode==3) {
            I = 1;
            E = 4;
        } else {
            break;
        }
        
        
        // 
        int step = (angleMax - angleMin) / (Pmax - Pmin);
        int angle = (P - Pmin) * step;
        

        T = 60000 / R;
        cout << "-------------------------------------------output------------------------------------------------------"<<endl;
        cout << "chu ky tho: " << T  << "ms" << endl;

        tH = T / (I+E) * I;
        tT = T/(I+E) * E;
        cout << "thoi gian hit: " << tH << endl;
        cout << "thoi gian tho: " << tT << endl;
        cout << "goc quay servo: " << angle << endl;
        cout << "thoi gian delay 1 buoc cua servo khi hit: " << tH / (P - Pmin) << endl;
        cout << "thoi gian delay 1 buoc cua servo khi tho: " << tT / (P - Pmin) << endl;
        cout << "-------------------------------------------lcd_output------------------------------------------------------"<<endl;
        cout << "Nhom \n";
        if(mode == 0) {
            cout << "mode: off" << endl;
        } else if (mode == 1)
        {
            /* code */
            cout << "mode: 1:2\n";
        } else if (mode==2)
        {
            /* code */
            cout << "mode: 1:3\n";
        } else if (mode==3)
        {
            /* code */
            cout << "mode: 1:4\n";
        }
        
        cout << "P: " << P << "     R: " << R << endl;
        cout << "T: " << T << endl;
    }
    
    
}
