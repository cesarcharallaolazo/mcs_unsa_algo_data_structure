# quick sort algorithm
# import pdb

# this implementation https://www.researchgate.net/figure/Quicksort-Pseudocode_fig21_2361704

def quick_sort(my_list, s, e):
    if (s < e):
        p = partitioning(my_list, s, e)

        quick_sort(my_list, s, p - 1)
        quick_sort(my_list, p + 1, e)


def partitioning(my_list, s, e):
    pvt_ix = s
    pivot = my_list[pvt_ix]

    while s < e:
        while s < len(my_list) and my_list[s] <= pivot:
            s = s + 1
        while my_list[e] > pivot:
            e = e - 1
        if s < e:
            my_list[s], my_list[e] = my_list[e], my_list[s]
    my_list[e], my_list[pvt_ix] = my_list[pvt_ix], my_list[e]

    return e


ll = [3, 1, 8, 9, 11, 8, 343, 17]
quick_sort(ll, 0, len(ll) - 1)

print(ll)
