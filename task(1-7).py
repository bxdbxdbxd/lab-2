num_for_towers = int(input())
com_tower_indicator = int(input())
cell_tower_str = input()
array_ind_one = []
err_ent = 0
flag = "Yes"

if (len(cell_tower_str) == num_for_towers):
    for i in range(num_for_towers):
        if cell_tower_str[i] != '1' and cell_tower_str[i] != '0':
            err_ent += 1
        if cell_tower_str[i] == '1':
            array_ind_one.append(i)
    if err_ent == 0:
        for i in range(len(array_ind_one)):
            result = array_ind_one[i] - array_ind_one[i - 1] - 1
            if result > (com_tower_indicator * 2):
                flag = "No"
        if array_ind_one[0] > com_tower_indicator:
            flag = "No"
        if (num_for_towers - 2 - array_ind_one[len(array_ind_one) - 1]) > com_tower_indicator:
            flag = "No"
        print(flag)
    else:
        print("Uncorrect")
else:
    print("Uncorrect")