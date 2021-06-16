# insertion sort algorithm
# import pdb

# this implementation https://www.chegg.com/homework-help/questions-and-answers/1-java-implement-method-sort-given-array-using-insertion-sort-algorithm-pseudocode-given---q26224054

def insertion_sort(my_list):
    for j in range(1, len(my_list)):
        key = my_list[j]
        i = j - 1
        while i >= 0 and my_list[i] > key:
            my_list[i + 1] = my_list[i]
            i = i - 1
        my_list[i + 1] = key

    return my_list


# evaluate

ll = [3, 1, 8, 9, 11, 8, 343, 17]
print(insertion_sort(ll))
