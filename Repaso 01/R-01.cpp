//Entrada y salida de consola
#include <iostream>
using namespace std;

void printArray(char array[9]);
bool hasLetter(char letter, char array1[9], char array2[9]);
bool compareArray(char array1[9], char array2[9]);
int main (void){
    char word[9] = {'c','o','d','i','f','i','c','a','r',};
    char aux[9];
    char letter;
    int a = 13;

    cout << "La palabra contiene nueve letras" << endl;
    do{
        cout << "Turnos restantes:\t " << a;cout << "Digite una letra: ";cin >> letter;

        if(hasLetter(letter,word,aux) == true){
            cout << "La palabra si contiene la letra " << letter << endl;
        }
        else{
            a--;
            cout << "La palabra no contiene la letra " << letter << endl;
        }
        printArray(aux);

        if(compareArray(word,aux) == true){
            cout << "Has adivinado la palabra" << endl;
            return 0;
        }
        cout << endl <<endl ;
        
    }while(a > 0);
    
    cout << " Lo siento has perdido";

    return 0;
}

bool hasLetter(char letter, char array1[9], char array2[9]){
    bool flag =false;
    for(int i = 0; i<9; i++){
        if(array1[i] == letter){
            flag = true;
            array2[i] = letter;
        }
    }
}

void printArray(char array[9]){
    for(int i = 0; i < 9; i++){
        cout << array[i] << "\t";
    }
}

bool compareArray(char array1[9], char array2[9]){
    for(int i = 0; i < 9; i++){
        if (array1[i]!= array2[i]){
            return false;
        }
    }
    return true;
}