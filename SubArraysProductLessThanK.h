//
// Created by sameer shaik on 1/1/2022.
//

#ifndef INC_6COMPANIES30DAYS_SUBARRAYSPRODUCTLESSTHANK_H
#define INC_6COMPANIES30DAYS_SUBARRAYSPRODUCTLESSTHANK_H
#include <iostream>
#include <vector>

int countSubArrayProductLessThanK(const std::vector<int>& a, int n, long long k) {
    int ans = 0;
    long long int pdt = 1;
    int j = 0;
    for (int i = 0; i < n; i++) {
        pdt *= a[i];
        if (pdt >= k) {
            while (j <= i && pdt >= k) {
                pdt /= a[j];
                j++;
            }
        }
        ans += i - j + 1;

    }
    return ans;
}

void testCountSubArrayProductLessThanK() {
    int n;
    std::cin >> n;
    int k;
    std::cin >> k;
    std::vector<int> a;
    int val;
    for (int i = 0; i < n; i++) {
        std::cin >> val;
        a.push_back(val);
    }
    cout << countSubArrayProductLessThanK(a, n, k) << endl;
}


#endif //INC_6COMPANIES30DAYS_SUBARRAYSPRODUCTLESSTHANK_H
