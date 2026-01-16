n, k , l, c, d, p, nl, np=map(int, input().split())
milliliters_of_drink= k*l
number_of_toasts_by_drink= milliliters_of_drink//nl
number_of_toasts_by_limes= c*d
number_of_toast_by_salt=p//np
number_of_toasts=min(number_of_toasts_by_drink, number_of_toasts_by_limes, number_of_toast_by_salt)//n
print(number_of_toasts)
