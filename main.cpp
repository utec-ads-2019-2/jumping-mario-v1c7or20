#include <iostream>

using namespace std;

void armaralturas(int wallnum, int *alturas){
    for (int j = 0; j <wallnum ; j++) {
        int temp;
        cin>>temp;
        alturas[j]=temp;
    }
}

int totalmayores(const int *alturas, int wallnum){
    int tempo = 0;
    for (int i = 0; i < wallnum-1; i++) {
        int resta = (alturas[i+1]-alturas[i]);
        if (resta != 0){
            if (resta<1){
                tempo = tempo+1;
            } else 0;
        }
    }
    return tempo;
}

int totalmenores(const int *alturas, int wallnum){
    int tempo = 0;
    for (int i = 0; i < wallnum-1; i++) {
        int resta = (alturas[i+1]-alturas[i]);
        if (resta != 0){
            if (resta<1){
                0;
            } else tempo = tempo+1;
        }
    }
    return tempo;
}

int main() {
    int cases;
    cin>>cases;
    int wallnum, *alturas;
    for (int i = 0; i <cases ; i++) {
    cin>>wallnum;
    alturas = new int[wallnum];
    armaralturas(wallnum,alturas);
    cout<<"Case "<<i+1<<": "<<totalmenores(alturas,wallnum)<<" "
    <<totalmayores(alturas,wallnum)<<endl;
    }

	return EXIT_SUCCESS;
}

