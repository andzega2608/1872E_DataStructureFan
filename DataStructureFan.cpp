/*
* Nombre: Andrés Ignacio Zegales Taborga
* Fecha: 24/10/2024
* Tema: Data Structure Fan 1872E - Codeforces
*/

#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
/*
* cambiar_string(string &s, int l, int r)
*
* Se usa para modificar el string acorde a los límites que
* brinda el usuario. En caso que sea 1 cambia a 0 y viceversa
*
* param string &string, int l_inferior, int r_superior
* @return
*/
void cambiar_string(string &s, int l, int r) {
    for (int i = l - 1; i < r; i++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
}
/*
* obtener_queues(string &s, queue<int> &unos, queue<int> &ceros,
* const vector<int> &num)
*
* Este metodo realizar el llenado de las queues de unos y ceros
* clasificando los elementos del vector acorde a los valores del
* string y su posicion
*
* param string &s, queue<int> &unos, queue<int> &ceros,
* const vector<int> &num
* @return
*/
void obtener_queues(string &s, queue<int> &unos, queue<int> &ceros, const vector<int> &num) {
    while (!ceros.empty()) {
        ceros.pop();
    }
    while (!unos.empty()) {
        unos.pop();
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            ceros.push(num[i]);
        } else {
            unos.push(num[i]);
        }
    }
}
/*
* obtener_xor(queue<int> que)
*
* Permite calcular el XOR de todos loe elementos que forman
* parte de la queue correspondiente, ya sea de la queue de unos
* o queue de ceros dependiendo de la consulta correspondiente
*
* param queue<int> que
* return XOR calculado
*/
int obtener_xor(queue<int> que) {
    int aux_xor = 0;
    while (!que.empty()) {
        aux_xor ^= que.front();
        que.pop();
    }
    return aux_xor;
}

int main() {
    int n;
    cin >> n;
    while (n > 0) {
        n = n - 1;
        queue<int> unos, ceros;
        int intent;
        cin >> intent;
        vector<int> vec_num(intent);
        for (int i = 0; i < intent; i++) {
            cin >> vec_num[i];
        }
        string s;
        cin >> s;
        obtener_queues(s, unos, ceros, vec_num);
        int consult;
        cin >> consult;
        while (consult > 0) {
            consult = consult - 1;
            int tipo;
            cin >> tipo;
            if (tipo == 1) {
                int l, r;
                cin >> l >> r;
                cambiar_string(s, l, r);
                obtener_queues(s, unos, ceros, vec_num);
            } else {
                int tipo_xor;
                cin >> tipo_xor;
                if (tipo_xor == 1) {
                    cout << obtener_xor(unos) << " ";
                } else {
                    cout << obtener_xor(ceros) << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
