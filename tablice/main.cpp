#include <iostream>
using namespace std;

int main() {
    int tab[4][2]={ {0,1},
                    {3,5},
                    {0,2},
                    {1,6}};
    
    //suma wszytskich elementow tablicy
    int suma=0;
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<2; j++)
        {
            suma+=tab[i][j];
        }
    }
    cout << "suma tablicy: " << suma<< endl;
    //suma wszytskich elementow tablicy
    
    
    
    //srednia elementow parzystych w drugiej kolumnie
    
    int sumaparzystych=0;
    int liczbaparzystych=0;
    
    for (int h=0; h<4; h++)
    {
        if(tab[h][1]%2==0){
            sumaparzystych+=tab[h][1];
            liczbaparzystych++;
        }
    }
    
    float sredniaparzystych=sumaparzystych/liczbaparzystych;
    cout << "srednia elementow parzystych w kolumnie 2 wynosi: " << sredniaparzystych << endl;
    //srednia elementow w drugiej kolumnie
    
    return 0;
}
