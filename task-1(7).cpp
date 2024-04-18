#include <iostream>

using namespace std;

int main() {
    int num_for_towers, com_tower_indicator, num_one = 0, result = 0, err_num = 0;
    cin >> num_for_towers >> com_tower_indicator;
    bool flag = 1;
    string cell_tower_str;
    int array_ind_one[num_for_towers];
    cin >> cell_tower_str;
    if (cell_tower_str.length() == num_for_towers) {
        for (int i = 0; i < num_for_towers; i++) {
            if (cell_tower_str[i] != '1' && cell_tower_str[i] != '0') {
                err_num += 1;
            }
            if (cell_tower_str[i] == '1') {
                array_ind_one[num_one] = i;
                num_one += 1;
            }
        }
        if (err_num == 0) {
            for (int i = 1; i < num_one; i++) {
                result = array_ind_one[i] - array_ind_one[i-1] - 1;
                if (result > (com_tower_indicator * 2)) {
                    flag = 0;
                }
            }
            if (array_ind_one[0] > com_tower_indicator) {
                flag = 0;
            }
            if ((num_for_towers - 2 - array_ind_one[num_one-1]) > com_tower_indicator) {
                flag = 0;
            }
            cout << ((flag == 0) ? "No":"Yes");
        }
        else {
            cout << "Uncorrect";
        }
    }
    else {
        cout << "Uncorrect";
    }
    return 0;
}