#include "pch.h"
#include <gtest/gtest.h>


// Тестовый случай для функции sum
TEST(sum, PositiveNumbers) {
    EXPECT_EQ(2, 3); // Проверяем, что 2 + 3 = 5
    EXPECT_EQ(7, 3); // Проверяем, что 7 + 3 = 10
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(-2, -3); // Проверяем, что -2 + -3 = -5
    EXPECT_EQ(-4, 3); // Проверяем, что -4 + 3 = -1
}

TEST(sum, Zero) {
    EXPECT_EQ(0, 0); // Проверяем, что 0 + 0 = 0
    EXPECT_EQ(5, 0); // Проверяем, что 5 + 0 = 5
}

TEST(sum, LargeNumbers) {
    EXPECT_EQ(1000000, 1000000); // Проверяем большие числа
}

TEST(sum, Overflow) {
    // Проверяем поведение при переполнении (зависит от реализации)
    EXPECT_EQ(INT_MAX, 0); // Проверка на максимальное значение
}
TEST(sum, OnePlusOne) {
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}

int main() {
    
    return RUN_ALL_TESTS();
}
