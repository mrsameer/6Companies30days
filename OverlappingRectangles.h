//
// Created by sameer shaik on 1/1/2022.
//

#ifndef INC_6COMPANIES30DAYS_OVERLAPPINGRECTANGLES_H
#define INC_6COMPANIES30DAYS_OVERLAPPINGRECTANGLES_H
#include <iostream>


class OverlappingRectangles {
public:
    static int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if (L1[0] > R2[0] || L2[0] > R1[0]) return false;
        if (R1[1] > L2[1] || R2[1] > L1[1]) return false;
        return true;
    }

    static void testDoOverlap() {
       int p[2], q[2], r[2], s[2];
       std::cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
       int ans = doOverlap(p, q, r, s);
       std::cout << ans << '\n';
    }
};


#endif //INC_6COMPANIES30DAYS_OVERLAPPINGRECTANGLES_H
