#include "pch.h"

int sum(int a, int b) {
	return a + b;
}

TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(5, sum(2, 3));   // Перевіряємо, що 2 + 3 = 5
    EXPECT_EQ(10, sum(7, 3));  // ППеревіряємо, що 7 + 3 = 10
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(-5, sum(-2, -3)); // Перевіряємо, що -2 + -3 = -5
    EXPECT_EQ(-1, sum(-4, 3));  // Перевіряємо, що -4 + 3 = -1
}

TEST(SumTest, Zero) {
    EXPECT_EQ(0, sum(0, 0));   // Перевіряємо, що 0 + 0 = 0
    EXPECT_EQ(5, sum(5, 0));   // Перевіряємо, що 5 + 0 = 5
}

TEST(SumTest, LargeNumbers) {
    EXPECT_EQ(2000000, sum(1000000, 1000000)); // Перевіряєм великі числа
}

TEST(SumTest, Overflow) {
    EXPECT_EQ(INT_MAX, sum(INT_MAX, 0)); // перевірка на максималье значення
}

TEST(SumTest, FailedTEST) {
    EXPECT_EQ(2, sum(3, 1)); // Перевірка невірної суми 3 + 1 = 2
    EXPECT_EQ(5, sum(10, 1)); // Перевірка невірної суми 10 + 1 = 5
}