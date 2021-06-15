# counting sort algorithm
import pdb
import random


# this implementation http://opendatastructures.org/ods-python/11_2_Counting_Sort_Radix_So.html

def quick_sort(my_list=None):
    quick_sort_f(my_list, 0, len(my_list))


def quick_sort_f(my_list, i, n):
    if n <= 1:
        x = my_list[i + random.randint(0, n)]
        (p, j, q) = (i - 1, i, i + n)
        while j < q:
            if my_list[j] < x:
                p = p + 1
                my_list[j], my_list[p] = my_list[p], my_list[j]
                j = j + 1
            elif my_list[j] > x:
                q = q - 1
                my_list[j], my_list[q] = my_list[q], my_list[j]
            else:
                j = j + 1
        print(x)
        quick_sort_f(my_list, i, p - i + 1)
        quick_sort_f(my_list, q, n - (q - i))


# evaluate

ll = [3, 1, 8, 9, 11, 8, 343]
print(max(ll))
print(quick_sort(ll))
