include <string>

using namespace std;

int* gyartas(int start, int end){
    int* szamok = new int[end - start + 1];

    for (int i = start; i <= end; i++){
        szamok[i - start] = i;
    }
    return szamok;
}
