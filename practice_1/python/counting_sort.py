# counting sort algorithm
import pdb

# this implementation http://opendatastructures.org/ods-python/11_2_Counting_Sort_Radix_So.html

def count_sort(my_list=None):
    c = []
    # b = [0 for i in range(len(my_list))]
    for _ in range(max(my_list) + 1):
        c.append(0)

    for i in range(len(my_list)):
        c[my_list[i]] = c[my_list[i]] + 1

    # for j in range(1, len(my_list) + 1):
    #     c[my_list[j]] = c[my_list[j]] + 1

    for i in range(1, max(my_list)+1):
        c[i] = c[i] + c[i - 1]

    b = [0 for i in range(len(my_list))]
    for i in range(len(my_list)):
        jp = len(my_list)-1 - i
        c[my_list[jp]] = c[my_list[jp]] - 1
        b[c[my_list[jp]]] = my_list[jp]

    return b


# evaluate

ll = [3, 1, 8, 9, 11 , 8 , 343]
print(max(ll))
print(count_sort(ll))
